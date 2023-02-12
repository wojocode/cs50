import sys
import random

from pyfiglet import Figlet

#open module
figlet = Figlet()

#get a list
font_list = figlet.getFonts()

length = len(font_list)
random_font = random.randint(0, length)

arg = len(sys.argv)
if arg == 1:
    plaintext = input("Input: ")
    ascii = random.shuffle(figlet)
    figlet.setFont(font={})
    print(figlet.renderText(plaintext))

if arg == 2:
    if (sys.argv[1] == "-f" or sys.argv[1] == "--f"):
     plaintext = input("Input: ")
     print(figlet.renderText(plaintext))
