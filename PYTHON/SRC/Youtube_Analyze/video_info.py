import requests
from selenium import webdriver
from bs4 import BeautifulSoup
from selenium.webdriver.common.keys import Keys
import time
from pynput.mouse import Button, Controller

url="https://www.youtube.com/c/NormalticPlace/videos"
options = webdriver.ChromeOptions()
# options.add_argument("headless")
driver = webdriver.Chrome(executable_path="C:\code\WORKSPACE/PYTHON/SRC/Youtube_Analyze/chromedriver.exe",chrome_options=options)
driver.get(url=url)
driver.maximize_window()
mouse = Controller()
while (1):
    before_location = driver.execute_script("return window.pageYOffset")
    driver.execute_script("window.scrollTo(0,{})".format(before_location + 100))
    time.sleep(0.3)
    after_location = driver.execute_script("return window.pageYOffset") 
    if before_location == after_location: 
        mouse.position = (1872, 1005)
        mouse.press(Button.left)
        mouse.release(Button.left)
        time.sleep(1)
        break
res = driver.page_source
soup=BeautifulSoup(res,'lxml')
title=soup.find_all("a","yt-simple-endpoint style-scope ytd-grid-video-renderer")
for i in title:
    print(i.text)