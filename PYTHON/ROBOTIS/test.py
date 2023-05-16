#pyttsx로 hello world 출력하기
import pyttsx3
engine = pyttsx3.init()
engine.say('Hello World')
engine.runAndWait()
