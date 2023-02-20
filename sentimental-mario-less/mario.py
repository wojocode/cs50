from cs50 import get_int

while True:
    height = get_int("height: ")
    if height >= 1 and height <= 8:
        break

for row in range(height):

    for space in range(1,height - row):
        print(" ",end="")

    for column in range(row+1):
        print("%",end="")

    print("",end ='\n')