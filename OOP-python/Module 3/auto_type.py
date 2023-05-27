import pyautogui
from time import sleep
sleep(5)
for i in range(0,5):
    pyautogui.write("I like python ",interval=.25)
    pyautogui.press('enter')


