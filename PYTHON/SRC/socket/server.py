from socket import *
import threading
import time
port = 9999
host="192.168.35.19"
server_socket = socket(AF_INET, SOCK_STREAM)
server_socket.setsockopt(SOL_SOCKET,SO_REUSEADDR, 1)
server_socket.bind((host,port)) 
server_socket.listen(3) 
sender=[]
receiver=[]
data=''
i=0
def receive(sock):
    global data,j,i,receiver,sender
    while True:
        recvData = sock.recv(1024)
        print(str(sock)+':', recvData.decode('utf-8'))
def send(sock):
    global data
    sendData = data
    sock.send(sendData.encode('utf-8'))
def basic():
    global i,sender,receiver,i_p
    print(str(addr),"에서 접속되었습니다.")
    sender.append("")
    receiver.append("")
    sender[i] = threading.Thread(target=send, args=(connectionSock,))
    receiver[i] = threading.Thread(target=receive, args=(connectionSock,))
    receiver[i].start()
    
    i+=1
print("===================Start Server===================")
while True:
    connectionSock, addr = server_socket.accept()
    basic()