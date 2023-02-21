import re
from cs50 import get_int, get_string

while True:
    card_number = get_int("enter card number: ")
    if card_number > 0:
        break

def checksum(card_number):
#checking if number length is add or even
    length = len(str(card_number))
    last = 10
    sum = 0
    previous = 100
    divider = 1

    for i in range(length, 0 , -2):
        digit = int(card_number % last)
        last = last * 100
        sum = sum + int((digit / divider))
        divider = divider * 10

    return sum

sum = checksum(card_number)
print(sum)