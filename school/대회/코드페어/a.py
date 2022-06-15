import serial
 
class arduino():
    def __init__(self,Port,Baud=9600,connState=0):
        self.parent=self
        self.port=Port
        self.baud=Baud
        self.connState=connState
        self.ser=None
        self.connect()
    def connect(self):
        try:
            self.ser=serial.Serial(self.port,self.baud,timeout=0.001)
            self.connState=1
        except:
            print('cannot connect')
    def loadData(self):
        while(1):
            ret = self.ser.readline()
            if(ret!=b''): 
                return ret