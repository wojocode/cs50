import sys

from pyfiglet import Figlet

figlet = Figlet()

arg = len(sys.argv)
if arg != 0 and arg != 2:
    print("invalid usage")
    sys.exit(1)




if sys.argv[2] == "-f" or sys.argv[2] == "--font":
        sys.exit(0)
else:
    print("invalid usage")
    sys.exit(1)