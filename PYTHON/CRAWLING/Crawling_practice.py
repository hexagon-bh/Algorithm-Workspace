import requests
from bs4 import BeautifulSoup

url="https://trends.google.com/trends/trendingsearches/daily?geo=KR"
res = requests.get(url)
res.raise_for_status()

soup = BeautifulSoup(res.text,"html.parser")
# Rank = soup.find("div",attrs={"class":"ranking_cont"})
print(soup.find("span"))