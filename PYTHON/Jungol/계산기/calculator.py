from tkinter import *

root = Tk()
root.geometry("400x600")
root.title("CALCULATOR")
root.resizable(False,False)
pr=Label(root,text=" ")
pr.grid(row=0,column=0,columnspan=4)

now=0

def now10():
    global now
    now=now*10
def prbt1():
    global now
    now10()
    now=now+1
def prbt2():
    global now
    now10()
    now=now+2
def prbt3():
    global now
    now10()
    now=now+3

number1=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=0, text='1',command=prbt1)
number1.grid(row=2,column=0)
number2=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='2',command=prbt2)
number2.grid(row=2,column=1)
number3=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='3',command=prbt3)
number3.grid(row=2,column=2)
number4=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='4',command=prbt4)
number4.grid(row=3,column=0)
number5=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='5',command=prbt5)
number5.grid(row=3,column=1)
number6=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='6',command=prbt6)
number6.grid(row=3,column=2)
number7=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='7',command=prbt7)
number7.grid(row=4,column=0)
number8=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='8',command=prbt8)
number8.grid(row=4,column=1)
number9=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='9',command=prbt9)
number9.grid(row=4,column=2)
number0=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='0',command=prbt0)
number0.grid(row=5,column=1)

# plus=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='+',command=prbt0)
# plus.grid(row=2,column=3)
# minus=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='-',command=prbt0)
# minus.grid(row=3,column=3)
# multiply=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='*',command=prbt0)
# multiply.grid(row=4,column=3)
# division=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='/',command=prbt0)
# division.grid(row=5,column=3)

# c=Button(root,padx=20,pady=15,fg="black",bg="white",relief="groove",borderwidth=1, text='c',command=prbt0)
# c.grid(row=5,column=0)

root.mainloop()
