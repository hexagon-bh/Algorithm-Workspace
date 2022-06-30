import requests
from selenium import webdriver #자동화 모듈(동적 웹)
from bs4 import BeautifulSoup#웹 스크랩 모듈
import tkinter#GUI모듈
from datetime import datetime#현재시간 구하는 모듈
import serial#파이썬과 아두이노 간의 통신 모듈
import time
two_hour=[]
commend=""; #python --> 아두이노  데이터 저장 변수
py_serial=0
def crawling():       #크롤링 함수
    global four_hour, commend,py_serial
    print("날씨 크롤링 시작")
    rain=["비","약한비","강한비","비","눈","약한눈","강한눈","진눈깨비","소나기","소낙눈","번개, 뇌우","우박","비 또는 눈","가끔 비","가끔 눈","가끔 비 또는 눈","흐려져 비","흐려져 비(밤)","흐려져 눈","흐려져 눈(밤)"] #비와 관련된 날씨
    url="https://search.naver.com/search.naver?where=nexearch&sm=top_hty&fbm=1&ie=utf8&query=%EB%85%B8%EC%9B%90%EA%B5%AC+%EB%82%A0%EC%94%A8" #크롤링 웹페이지 주소
    options = webdriver.ChromeOptions()
    options.add_experimental_option("excludeSwitches", ["enable-logging"])
    options.add_argument("headless")    #크롤링 인터넷 화면 숨기기
    driver = webdriver.Chrome(executable_path="C:\code\WORKSPACE\school\대회\코드페어\chromedriver.exe",chrome_options=options)#driver  주소 설정
    driver.get(url=url)
    res = driver.page_source
    soup=BeautifulSoup(res,'lxml')

    #날씨 정보
    a=soup.find("p","summary").getText()
    a=a.split(" ")
    ok=0
    weather = a[4]
    # weather="비"
    print(weather)
    status=0
    for i in range(0,20): #비와 관련된 날씨에 해당하는지 확인
        if weather==rain[i]:
            ok=ok+1
    if ok>=1: #ok=1이면 비가 온다. ok=0이면 비가 안온다.
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
    print(commend)
    if py_serial.readable():
        commend=commend.encode('utf-8')
        py_serial.write(commend)



def main(): #메인 함수
    global py_serial,commend
    print("PYTHON: 프로그램 시작")
    py_serial = serial.Serial(port='COM3',baudrate=9600,)
    crawling()
    #10분측정
    old_minute=0
    today=datetime.now()
    old_minute=today.minute
    while True:
        #현재시간
        today=datetime.now()
        current_minute=today.minute
        #10분이 지나면 크롤링 실해되는 코드
        if current_minute==old_minute+3:
            crawling()
            old_minute=current_minute
        elif (old_minute>50 and old_minute<=0):
            if current_minute==old_minute+3:
                crawling()
                old_minute=current_minute

#신발 청소기 관리 프로그램 GUI(프로그램 창)
window=tkinter.Tk()
window.title("신발 청소기 관리 프로그램") #TITLE
title=tkinter.Label(text="장치 시작")
title.pack()
start= tkinter.Button(window, text="start",command=main)#장치시작 버튼
start.pack()
window.mainloop()