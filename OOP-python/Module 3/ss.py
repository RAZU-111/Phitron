import pyautogui
import pyautogui
from time import sleep
sleep(5)
img1 = pyautogui.screenshot()
img2 = pyautogui.screenshot('my_screenshot2.png')
img1.save('my_screenshot.png')
