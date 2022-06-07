import requests
from selenium import webdriver
from bs4 import BeautifulSoup
import time
import tkinter
from datetime import datetime
import serial
import time
four_hour=[]
def crawling():
    print("날씨 크롤링 시작")
    rain=["약한비","강한비","비","눈","약한눈","강한눈","진눈깨비","소나기","소낙눈","번개, 뇌우","우박","비 또는 눈","가끔 비","가끔 눈","가끔 비 또는 눈","흐려져 비","흐려져 비(밤)","흐려져 눈","흐려져 눈(밤)"]
    url="https://search.naver.com/search.naver?query=%EA%B0%95%EC%88%98#"
    # options = webdriver.ChromeOptions()
    # options.add_experimental_option("excludeSwitches", ["enable-logging"])
    # options.add_argument("headless")
    driver = webdriver.Chrome(executable_path="C:/Users/user/Documents/GitHub/WORKSPACE/school/chromedriver.exe")#,chrome_options=options
    driver.get(url=url)
    res = driver.page_source
    soup=BeautifulSoup(res,'lxml')
    a=soup.find("p","summary").getText()
    a=a.split(" ")
    ok=0
    weather = a[4]
    status=0
    for i in range(0,19):
        if weather==rain[i]:
            ok=ok+1
    if ok==19:
        print("비가 옵니다.")
        status=1
    else:
        print("날씨가 맑습니다.")
        status=0
    if len(four_hour)<4:
        four_hour.append(status)
    elif len(four_hour)==4:
        four_hour.append(status)
        del four_hour[0]
def main():
    print("프로그램 시작")
    old_hour=0
    while True:
        today=datetime.now()
        current_hour=today.hour
        if current_hour==old_hour+1:
            crawling()
        elif old_hour==24 and current_hour==1:
            crawling()
        old_hour=current_hour
window=tkinter.Tk()
window.title("신발 청소기 관리 프로그램")
title=tkinter.Label(text="블루트스 연결")
title.pack()
start= tkinter.Button(window, text="start",command=main)
start.pack()
window.mainloop()