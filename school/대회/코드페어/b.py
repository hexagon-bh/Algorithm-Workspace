import a
import serial.tools.list_ports
import re
import time
import threading
 
class receiveThread(threading.Thread):
    def __init__(self,arduino):
        super().__init__()
        self._kill = threading.Event()
        self.ard = arduino
        self.start()
    def run(self):
        while True:
            msg = self.ard.loadData()
            print(self.ard.port, msg.decode(),end='')
            is_killed = self._kill.wait(0.5)
            if is_killed:
                break
        print(ard.port, "thread killed")
    def kill(self):
        self._kill.set()
 
def receiveMsg(stop,ard):
    print(ard.ser.port,": started receiving messages...")
    while True:
        if stop():
            print("stopped {} receiving...".format(ard.port))
            break;
        msg = ard.loadData()
        print(ard.ser.port,msg.decode(),end='')
        
def killThread():
    id = input("Enter thread id :")
    return int(id)
 
def sendMessage(arduino):
    arduino = arduino[:]
    msg = input("Enter message to send : ")+'\n'
    for a in arduino:
        a.ser.write(msg.encode());
    
def main():
    ports = [c.device for c in serial.tools.list_ports.comports() if re.search("rfcomm",c.device)!=None]
 
    for a in ports:
        print(a)
 
    arduino = [Arduino.arduino(port) for port in ports]
    arduino = [a for a in arduino if a.connState==1]
 
    #thread = [receiveThread(a) for a in arduino]
    stop_thread = [False]*len(arduino)
    i=0
    threads = []
    for a in arduino:
        t = threading.Thread(target=receiveMsg,args=(lambda: stop_thread[i],a))
        threads.append(t)
        t.start()
        ++i
 
 
    while(1):
        option = input("(1: broadcast message, 2: send message to certain device ,3: kill thread) ")
        if option == "1":
            sendMessage(arduino)
        elif option == "2":
            sendMessage(arduino)
        elif option == "3":
            stop_thread[killThread()] = True
 
if __name__ == '__main__':
    main()
 
