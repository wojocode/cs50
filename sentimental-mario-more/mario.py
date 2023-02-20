
while True:
    height = int(input("Height: "))
    if height > 0 and height < 9:
        break

for big_row in range(height):
    #right aligned piramid
    for row in range(1,height - big_row):
        print(" ",end="")
    for column in range(big_row + 1):
        print("#", end="")
    #space between piramid
    print("  ",end="")
   #right aligned piramid
    for column in range(big_row + 1):
        print("#", end="")
print("",end="\n")