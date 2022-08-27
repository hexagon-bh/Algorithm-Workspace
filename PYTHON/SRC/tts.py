import pyttsx3

engine = pyttsx3.init()
engine.setProperty('rate', 200)
engine.say('crtl+f')
engine.runAndWait()

