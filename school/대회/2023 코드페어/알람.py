import datetime
from gtts import gTTS
import os
import speech_recognition
import playsound
def speak(text, lang="ko",speed=False):
    tts = gTTS(text=text,lang=lang)
    tts.save('message.mp3')
    playsound.playsound("message.mp3")
r = speech_recognition.Recognizer()
while True:
    try: #인식&처리에서 에러가 날겨우를 대비한 예외처리
        with speech_recognition.Microphone() as source:
            r.adjust_for_ambient_noise(source) #노이즈가 있는 데이터를 인식
            audio=r.listen(source) #데이터를 읽음
            data=r.recognize_google(audio,language="ko") #음성데이터를 문자로 변환함(한국어)
            print(data)
    except:
        r=speech_recognition.Recognizer()
    if data=="엘리스":
          try: #인식&처리에서 에러가 날겨우를 대비한 예외처리
        with speech_recognition.Microphone() as source:
            r.adjust_for_ambient_noise(source) #노이즈가 있는 데이터를 인식
            audio=r.listen(source) #데이터를 읽음
            data=r.recognize_google(audio,language="ko") #음성데이터를 문자로 변환함(한국어)
            print(data)
    except:
        r=speech_recognition.Recognizer()
      if data=="약 복용시간 알람 맞춰줘":
        speak("알람 시간을 알려주세요!")
        try: #인식&처리에서 에러가 날겨우를 대비한 예외처리
          with speech_recognition.Microphone() as source:
            r.adjust_for_ambient_noise(source) #노이즈가 있는 데이터를 인식
            audio=r.listen(source) #데이터를 읽음
            data=r.recognize_google(audio,language="ko") #음성데이터를 문자로 변환함(한국어)
            print(data)
        except:
          r=speech_recognition.Recognizer()
        hour=data[data.find("시")-1]
        minute=data[data.fine("분")-1]
    # if data=="엘리스":
        while True:
          now=datetime.datetime.now()
          if now.hour==hour:
            if now.minute==hour:
              playsound.playsound("alert.mp3")
              break