from tkinter import *

root = Tk()
root.geometry("400x600")
root.title("CALCULATOR")
root.resizable(False,False)
pr=Label(root,text=" ")
pr.pack()

def prbt1():
    pr.config(text="1")
def prbt2():
    pr.config(text="2")

number1=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='1',command=prbt1)
number1.pack()
number2=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='2',command=prbt2)
number2.pack()


root.mainloop()