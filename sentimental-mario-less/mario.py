from cs50 import get_int

while True:
    height = get_int("height: ")
    if height >= 1 and height <= 8:
        break

for i in range(1,height + 1):

    for a in range(1,(height + 1) - i):
        print(" ",end="")

    for b in range(1,height - a):
        print("%",end="")

    print("",end ='\n')