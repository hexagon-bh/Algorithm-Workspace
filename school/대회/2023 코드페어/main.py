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
    try:
        with speech_recognition.Microphone() as source:
            print("mic")
            r.adjust_for_ambient_noise(source)
            audio=r.listen(source)
            data=r.recognize_google(audio,language="ko")
            print("success recog")
            print(data)
    except:
        r=speech_recognition.Recognizer()
    if data=="엘리스":
        speak("안녕하세요")