import sys

from pyfiglet import Figlet

#open module
figlet = Figlet()

#get a list
figlet.getFonts()


arg = len(sys.argv)
if arg == 0:
    plaintext = input("Input: ")
    



'''
if arg != 0 and arg != 2:
    print("invalid usage")
    sys.exit(1)


if arg == 0 and arg == 2:


if sys.argv[1] == "-f" or sys.argv[1] == "--font":
        sys.exit(0)
else:
    print("invalid usage")
    sys.exit(1)

'''