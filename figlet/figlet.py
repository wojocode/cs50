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
    asciart = random.random()
    figlet.setFont(font=)
    print(figlet.renderText(plaintext))


