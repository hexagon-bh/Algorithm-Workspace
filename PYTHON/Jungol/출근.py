import tkinter
window=tkinter.Tk()
window.title("출퇴근 프로그램")
result=tkinter.Label(window,text="dd").grid(row=2,column=0)
a= tkinter.Label(window, text="이름").grid(row=0,column=0)
name=tkinter.Entry(window).grid(row=0,column=1)
def enter():
    print(str(name.get()))
    # result.lablel['text']=a+"님"
button=tkinter.Button(window,text="출근/퇴근",command=enter).grid(row=1,column=1)
window.mainloop()