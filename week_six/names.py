import sys

names = {"Wojtek", "Piotr", "Paweł", "Roman"}

name = input("Enter name: ")

if name in names:
    print("Found")
    sys.exit(0)

else:
    print("Not found")
    sys.exit(1)