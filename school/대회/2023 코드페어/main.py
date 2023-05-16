# import calendar
# import datetime
# import pyttsx3
# import os #김강현 곰보빵
# import time
# import requests
# from selenium import webdriver
# from bs4 import BeautifulSoup
# import tkinter
# print("Start Program")
# # engine = pyttsx3.init()
# # engine.setProperty('rate', 150)
# # engine.setProperty('volume', 0.9)
# # engine.say("Start Program")
# # engine.runAndWait()
# from gtts import gTTS
# import os
# from playsound import playsound
# tts = gTTS(text='Hello, World!',lang="ko")
# tts.save('hello.mp3')
# playsound("hello.mp3")
import speech_recognition as sr
#import sys #-- 텍스트 저장시 사용

r = sr.Recognizer()

audio_file = sr.AudioFile("test.wav")
with audio_file as source:
    audio = r.record(source)

#sys.stdout = open('stdout.txt', 'w') #-- 텍스트 저장시 사용

print(r.recognize_google(audio))
