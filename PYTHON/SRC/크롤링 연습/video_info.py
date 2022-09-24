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
res = driver.page_source
soup=BeautifulSoup(res,'lxml')
title=soup.find_all()