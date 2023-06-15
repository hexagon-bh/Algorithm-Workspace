import calendar
import datetime
import os
import time
import requests
from selenium import webdriver
from bs4 import BeautifulSoup
from gtts import gTTS
import os
import speech_recognition
import playsound
def speak(text, lang="ko",speed=False):
    tts = gTTS(text=text,lang=lang)
    tts.save('message.mp3')
    playsound.playsound("message.mp3")
r = speech_recognition.Recognizer()
data=""
while True:
    try: #인식&처리에서 에러가 날겨우를 대비한 예외처리
        with speech_recognition.Microphone() as source:
            r.adjust_for_ambient_noise(source) #노이즈가 있는 데이터를 인식
            audio=r.listen(source) #데이터를 읽음
            data=r.recognize_google(audio,language="ko") #음성데이터를 문자로 변환함(한국어)
            print(data)
    except:
        r=speech_recognition.Recognizer()
    # if data=="엘리스":