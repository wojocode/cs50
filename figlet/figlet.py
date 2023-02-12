import sys

from pyfiglet import Figlet

figlet = Figlet()

arg = len(sys.argv)
if arg == 1:

elif arg == 2:
    if sys.argv[2] == "-f" or "--font":
        sys.exit(0)
    else:
        print("invalid usage")

