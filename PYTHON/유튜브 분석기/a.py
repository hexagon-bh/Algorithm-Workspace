from selenium import webdriver
from bs4 import BeautifulSoup

options = webdriver.ChromeOptions()
options.add_experimental_option("excludeSwitches", ["enable-logging"])
browser = webdriver.Chrome(options=options)
browser = webdriver.Chrome()
# title
browser.get("https://www.youtube.com/c/%EC%8A%B9%EC%9A%B0%EC%95%84%EB%B9%A0/videos")
html = browser.page_source
soup = BeautifulSoup(html, 'html.parser')
title=soup.find_all("a",attrs={"class":"yt-simple-endpoint style-scope ytd-grid-video-renderer"})
for n in title: print(n.text.strip())
#구독자
browser.get("https://www.youtube.com/c/%EC%8A%B9%EC%9A%B0%EC%95%84%EB%B9%A0/featured")
html = browser.page_source
soup = BeautifulSoup(html, 'html.parser')
subscribe=soup.find_all("yt-formatted-string",attrs={"id":"subscriber-count"})
for n in subscribe: print(n.text.strip())