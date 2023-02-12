import sys
import random

from pyfiglet import Figlet

#open module
figlet = Figlet()

#get a list
figlet.getFonts()


arg = len(sys.argv)
if arg == 1:
    plaintext = input("Input: ")

    figlet.setFont(font=random.)
    print(figlet.renderText(plaintext))


