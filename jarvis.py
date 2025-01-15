import speech_recognition as sr
import webbrowser
import pyttsx3

recognizer=sr.Recognizer()
engine=pyttsx3.init()

def speak(text):
    engine.say(text)
    engine.runAndWait()
def processCommand(c):
    if "open google" in c.lower():
        webbrowser.open("https://google.com")
    elif "open youtube" in c.lower():
        webbrowser.open("https://youtube.com")
    elif "open linkedin" in c.lower():
        webbrowser.open("https://linkedin.com")
    else:
        speak(c)

if __name__=="__main__":
    speak("initializing jarvis....")
    while True:
        #listen for the wake worf "jarvis"
        #obtain audio from the microphone
        r=sr.Recognizer()

        print("recognizing...")
        try:
            with sr.Microphone() as source:
                print("Listening...")
                audio=r.listen(source,timeout=2, phrase_time_limit=1)
            word=r.recognize_google(audio)
            if(word.lower()=="jarvis"):
                speak("Yes What Can I Help You?")
                #listen for command
                with sr.Microphone()as source:
                    print("jarvis activated")
                    audio=r.listen(source)
                    command=r.recognize_google(audio)

                    processCommand(command)
        except Exception as e:
            print("error; {0}".format(e))