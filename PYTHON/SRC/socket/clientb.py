from socket import *
import threading
import time

host = '192.168.35.19'
port = 9999
client_socket = socket(AF_INET,SOCK_STREAM) 
client_socket.connect((host, port)) 
print('접속 완료')
def send(sock):
    while True:
        sendData = input('>>>')
        sock.send(sendData.encode('utf-8'))
def receive(sock):
    while True:
        recvData = sock.recv(1024)
        print('상대방 :', recvData.decode('utf-8'))
sender = threading.Thread(target=send, args=(client_socket,))
receiver = threading.Thread(target=receive, args=(client_socket,))
sender.start()
receiver.start()
while True:
    time.sleep(1)
    pass