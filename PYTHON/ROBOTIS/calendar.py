from cProfile import label
import tkinter
import calendar
from datetime import datetime
from tkinter.font import BOLD
#window
window=tkinter.Tk()
window.title("CALENDAR")
window.geometry("600x500")
#일정 추가
def spawn_sub():
    sub=tkinter.Tk()
    sub.title("일정 추가")
    sub.geometry('500x300')
#현재 년,월
years=datetime.today().year
Month=datetime.today().month
#(월) 1일 요일 구하기
dates=[" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "]
def f_month_1():
    global years,Month,dates
    month_range=calendar.monthrange(years,Month)
    dates=[" "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "]
    month_range=list(month_range)
    for i in range(1,month_range[1]+1):
        dates.insert(month_range[0],str(i))
        month_range[0] += 1
f_month_1()
#top
title=tkinter.Frame(window,bd=1)
title.grid(row=0,column=0)
top=tkinter.Frame(window,bd=2)
top.grid(row=1,column=0)
Title = tkinter.Label(title, text="CALENDAR",font=("Arial", 20))
Title.grid(row=0,column=3)
Year_MONTH=str(years)+"년"+str(Month)+"월"
YMs=tkinter.Label(top,text=Year_MONTH,font=("Arial",15))
YMs.grid(row=1,column=0)
#frame
date=tkinter.Frame(window,bd=2)
date.grid(row=4,column=0)
#요일
sunday=tkinter.Label(date,text="월",font=("Arial",10))
sunday.grid(row=4,column=1)
monday=tkinter.Label(date,text="화",font=("Arial",10))
monday.grid(row=4,column=2)
tuesday=tkinter.Label(date,text="수",font=("Arial",10))
tuesday.grid(row=4,column=3)
wednesday=tkinter.Label(date,text="목",font=("Arial",10))
wednesday.grid(row=4,column=4)
thursday=tkinter.Label(date,text="금",font=("Arial",10))
thursday.grid(row=4,column=5)
friday=tkinter.Label(date,text="토",font=("Arial",10),fg='red')
friday.grid(row=4,column=6)
saturday=tkinter.Label(date,text="일",font=("Arial",10),fg='red')
saturday.grid(row=4,column=7)
#date
def re_date():
    global dates
    date1=tkinter.Button(date,text=dates[0],font=("Arial",20),width=3,height=0)#1번째
    date1.grid(row=5,column=1)
    date2=tkinter.Button(date,text=dates[1],font=("Arial",20),width=3,height=0)
    date2.grid(row=5,column=2)
    date3=tkinter.Button(date,text=dates[2],font=("Arial",20),width=3,height=0)
    date3.grid(row=5,column=3)
    date4=tkinter.Button(date,text=dates[3],font=("Arial",20),width=3,height=0)
    date4.grid(row=5,column=4)
    date5=tkinter.Button(date,text=dates[4],font=("Arial",20),width=3,height=0)
    date5.grid(row=5,column=5)
    date6=tkinter.Button(date,text=dates[5],font=("Arial",20),width=3,height=0)
    date6.grid(row=5,column=6)
    date7=tkinter.Button(date,text=dates[6],font=("Arial",20),width=3,height=0)
    date7.grid(row=5,column=7)
    date8=tkinter.Button(date,text=dates[7],font=("Arial",20),width=3,height=0)#2번째
    date8.grid(row=6,column=1)
    date9=tkinter.Button(date,text=dates[8],font=("Arial",20),width=3,height=0)
    date9.grid(row=6,column=2)
    date10=tkinter.Button(date,text=dates[9],font=("Arial",20),width=3,height=0)
    date10.grid(row=6,column=3)
    date11=tkinter.Button(date,text=dates[10],font=("Arial",20),width=3,height=0)
    date11.grid(row=6,column=4)
    date12=tkinter.Button(date,text=dates[11],font=("Arial",20),width=3,height=0)
    date12.grid(row=6,column=5)
    date13=tkinter.Button(date,text=dates[12],font=("Arial",20),width=3,height=0)
    date13.grid(row=6,column=6)
    date14=tkinter.Button(date,text=dates[13],font=("Arial",20),width=3,height=0)
    date14.grid(row=6,column=7)
    date15=tkinter.Button(date,text=dates[14],font=("Arial",20),width=3,height=0)#3번째
    date15.grid(row=7,column=1)
    date16=tkinter.Button(date,text=dates[15],font=("Arial",20),width=3,height=0)
    date16.grid(row=7,column=2)
    date17=tkinter.Button(date,text=dates[16],font=("Arial",20),width=3,height=0)
    date17.grid(row=7,column=3)
    date18=tkinter.Button(date,text=dates[17],font=("Arial",20),width=3,height=0)
    date18.grid(row=7,column=4)
    date19=tkinter.Button(date,text=dates[18],font=("Arial",20),width=3,height=0)
    date19.grid(row=7,column=5)
    date20=tkinter.Button(date,text=dates[19],font=("Arial",20),width=3,height=0)
    date20.grid(row=7,column=6)
    date21=tkinter.Button(date,text=dates[20],font=("Arial",20),width=3,height=0)
    date21.grid(row=7,column=7)
    date22=tkinter.Button(date,text=dates[21],font=("Arial",20),width=3,height=0)#4번째
    date22.grid(row=8,column=1)
    date23=tkinter.Button(date,text=dates[22],font=("Arial",20),width=3,height=0)
    date23.grid(row=8,column=2)
    date24=tkinter.Button(date,text=dates[23],font=("Arial",20),width=3,height=0)
    date24.grid(row=8,column=3)
    date25=tkinter.Button(date,text=dates[24],font=("Arial",20),width=3,height=0)
    date25.grid(row=8,column=4)
    date26=tkinter.Button(date,text=dates[25],font=("Arial",20),width=3,height=0)
    date26.grid(row=8,column=5)
    date27=tkinter.Button(date,text=dates[26],font=("Arial",20),width=3,height=0)
    date27.grid(row=8,column=6)
    date28=tkinter.Button(date,text=dates[27],font=("Arial",20),width=3,height=0)
    date28.grid(row=8,column=7)
    date29=tkinter.Button(date,text=dates[28],font=("Arial",20),width=3,height=0)#5번째
    date29.grid(row=9,column=1)
    date30=tkinter.Button(date,text=dates[29],font=("Arial",20),width=3,height=0)
    date30.grid(row=9,column=2)
    date31=tkinter.Button(date,text=dates[30],font=("Arial",20),width=3,height=0)
    date31.grid(row=9,column=3)
    date32=tkinter.Button(date,text=dates[31],font=("Arial",20),width=3,height=0)
    date32.grid(row=9,column=4)
    date33=tkinter.Button(date,text=dates[32],font=("Arial",20),width=3,height=0)
    date33.grid(row=9,column=5)
    date34=tkinter.Button(date,text=dates[33],font=("Arial",20),width=3,height=0)
    date34.grid(row=9,column=6)
    date35=tkinter.Button(date,text=dates[34],font=("Arial",20),width=3,height=0)
    date35.grid(row=9,column=7)
    date36=tkinter.Button(date,text=dates[35],font=("Arial",20),width=3,height=0)
    date36.grid(row=10,column=1)
    date37=tkinter.Button(date,text=dates[36],font=("Arial",20),width=3,height=0)
    date37.grid(row=10,column=2)
    date38=tkinter.Button(date,text=dates[37],font=("Arial",20),width=3,height=0)
    date38.grid(row=10,column=3)
    date39=tkinter.Button(date,text=dates[38],font=("Arial",20),width=3,height=0)
    date39.grid(row=10,column=4)
    date40=tkinter.Button(date,text=dates[39],font=("Arial",20),width=3,height=0)
    date40.grid(row=10,column=5)
    date41=tkinter.Button(date,text=dates[40],font=("Arial",20),width=3,height=0)
    date41.grid(row=10,column=6)
    date42=tkinter.Button(date,text=dates[41],font=("Arial",20),width=3,height=0)
    date42.grid(row=10,column=7)
    sub_spawn_button=tkinter.Button(date,text="+",font=("Arial",20),width=3,height=0,command=spawn_sub)
    sub_spawn_button.grid(row=10,column=8)
re_date()
#top_2
def up():
    global Month,years,YMs,Year_MONTH
    if Month<=11:
        Month += 1
    elif Month==12:
        years += 1
        Month=1
    Year_MONTH=str(years)+"년"+str(Month)+"월"
    YMs.configure(text=Year_MONTH)
    f_month_1()
    re_date()
def down():
    global Month,years,YMs,Year_MONTH
    if Month>=2:
        Month -= 1
    elif Month==1:
        years -= 1
        Month=12
    Year_MONTH=str(years)+"년"+str(Month)+"월"
    YMs.configure(text=Year_MONTH)
    f_month_1()
    re_date()
Up=tkinter.Button(top,text='>',font=('Arial',15),width=3,height=1,command=up)
Up.grid(row=1,column=2)
Down=tkinter.Button(top,text='<',font=('Arial',15),width=3,height=1,command=down)
Down.grid(row=1,column=1)
window.mainloop()
