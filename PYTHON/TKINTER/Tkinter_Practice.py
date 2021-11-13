from tkinter import *#GUI 프로그래밍 모듈

root = Tk()#TK 객체 생성. (기본 윈도우 객체)
root.title("CALANDER")#TITLE 설정
root.geometry("640x480")#SIZE 설정 - 가로*세로(곱셈부호:x)
root.geometry("640x480+300+100")#위치설정 - 가로 * 세로 +X좌표 + Y좌표
root.resizable(False, False)#SIZE변경 불가 - X(너비), Y(높이)

root.mainloop()#mainloop()는 이벤트 메시지 루프로서 키보드나 마우스 혹은 화면 Redraw(새로고침)와 같은 다양한 이벤트로부터 오는 메시지를 받고 전달하는 역활