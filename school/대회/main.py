import requests
from selenium import webdriver
from bs4 import BeautifulSoup
import time
import tkinter
from datetime import datetime
import serial
import time
two_hour=[]
commend="";
py_serial=0
def crawling():
    global four_hour, commend,py_serial
    print("날씨 크롤링 시작")
    rain=["비","약한비","강한비","비","눈","약한눈","강한눈","진눈깨비","소나기","소낙눈","번개, 뇌우","우박","비 또는 눈","가끔 비","가끔 눈","가끔 비 또는 눈","흐려져 비","흐려져 비(밤)","흐려져 눈","흐려져 눈(밤)"]
    url="https://search.naver.com/search.naver?where=nexearch&sm=top_hty&fbm=1&ie=utf8&query=%EB%85%B8%EC%9B%90%EA%B5%AC+%EB%82%A0%EC%94%A8"
    # options = webdriver.ChromeOptions()
    # options.add_experimental_option("excludeSwitches", ["enable-logging"])
    # options.add_argument("headless")
    driver = webdriver.Chrome(executable_path="C:\code\WORKSPACE\school\대회\chromedriver.exe")#,chrome_options=options
    driver.get(url=url)
    res = driver.page_source
    soup=BeautifulSoup(res,'lxml')
    a=soup.find("p","summary").getText()
    a=a.split(" ")
    print(a)
    ok=0
    weather = a[4]
    weather="맑음"
    print(weather)
    status=0
    for i in range(0,20):
        if weather==rain[i]:
            ok=ok+1
    if ok>=1:
        print("PYTHON: 비가 옵니다.")
        status=1
    else:
        print("PYTHON: 날씨가 맑습니다.")
        status=0
    if len(two_hour)<12:
        two_hour.append(status)
    elif len(two_hour)==12:
        two_hour.append(status)
        del two_hour[0]
    sum_status=sum(two_hour)
    if sum_status>=1:
        commend="1"
    elif sum_status==0:
        commend="0"
    commend=commend.encode('utf-8')
    py_serial.write(commend)
    print("PYTHON: 날씨 데이터 수송 중.....")

def main():
    global py_serial
    print("PYTHON: 프로그램 시작")
    py_serial = serial.Serial(port='COM3',baudrate=9600,)
    crawling()
    old_minute=0
    today=datetime.now()
    old_minute=today.minute
    while True:
        today=datetime.now()
        current_minute=today.minute
        print(current_minute)
        if current_minute==old_minute+2:
            crawling()
            old_minute=current_minute
        elif old_minute==0 and current_minute==2:
            crawling()
            old_minute=current_minute
window=tkinter.Tk()
window.title("신발 청소기 관리 프로그램")
title=tkinter.Label(text="블루트스 연결")
title.pack()
start= tkinter.Button(window, text="start",command=main)
start.pack()
window.mainloop()