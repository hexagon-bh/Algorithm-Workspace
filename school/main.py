import requests
from selenium import webdriver
from bs4 import BeautifulSoup
import time
import tkinter
from datetime import datetime
rain=["약한비","강한비","비","눈","약한눈","강한눈","진눈깨비","소나기","소낙눈","번개, 뇌우","우박","비 또는 눈","가끔 비","가끔 눈","가끔 비 또는 눈","흐려져 비","흐려져 비(밤)","흐려져 눈","흐려져 눈(밤)"]
url="https://search.naver.com/search.naver?query=%EA%B0%95%EC%88%98#"
options = webdriver.ChromeOptions()
options.add_experimental_option("excludeSwitches", ["enable-logging"])
# options.add_argument("headless")
driver = webdriver.Chrome(executable_path="C:\code\WORKSPACE\school/chromedriver.exe",chrome_options=options)
driver.get(url=url)
res = driver.page_source
soup=BeautifulSoup(res,'lxml')
a=soup.find("p","summary").getText()
a=weather.split(" ")
weather = a[4]
for i in range(0,19):
    if weather==rain[i]:
        print("ok")