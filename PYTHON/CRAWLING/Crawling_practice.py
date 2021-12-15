import requests
from bs4 import BeautifulSoup

url="https://www.youtube.com/c/tvNDENT/videos"
res = requests.get(url)
res.raise_for_status()

soup= BeautifulSoup(res.text, 'lxml')

h=soup.find_all("a",attrs={"class":"yt-simple-endpoint style-scope ytd-grid-video-renderer"})
print(h)