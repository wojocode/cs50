from cs50 import get_int

while True:
    height = get_int("height: ")
    if height >= 1 and height <= 8:
        break

for i in range(height):

    for a in range((height-1) - i):
        print(" ",end="")

    for b in range(height - a):
        print("%",end="")

    print("",end ='\n')