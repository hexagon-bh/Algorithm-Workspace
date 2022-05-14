import pyttsx3

engine = pyttsx3.init()


while True:
    engine.setProperty('rate', 200)
    engine.say('안하면 안되요?')
    engine.runAndWait()

