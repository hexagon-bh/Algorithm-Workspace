import requests
from bs4 import BeautifulSoup

url="https://comic.naver.com/webtoon/weekday"
res = requests.get(url)
res.raise_for_status()

soup = BeautifulSoup(res.text,"html.parser")
category = soup.find("ul",attrs={"class":"category_tab"})
print(category)

