import sys
import random

from pyfiglet import Figlet

#open module
figlet = Figlet()

#get a list
font_list = figlet.getFonts()

#radnomize list
length = len(font_list)
random_font = random.randint(0, length)

arg = len(sys.argv)
if arg == 1:
    plaintext = input("Input: ")
    figlet.setFont(font=font_list[random_font])
    print(figlet.renderText(plaintext))

if arg == 3:
    if (sys.argv[1] == "-f" or sys.argv[1] == "--f") and (sys.argv[2] in font_list):
     plaintext = input("Input: ")
     figlet.setFont(font=sys.argv[2])
     print(figlet.renderText(plaintext))
    else:
        print("invalid ")
