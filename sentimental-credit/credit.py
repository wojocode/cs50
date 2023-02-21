import re
from cs50 import get_int, get_string

while True:
    card_number = get_int("enter card number: ")
    if card_number > 0:
        break

def checksum(card_number):
#checking if number length is add or even
    length = len(str(card_number))
    multiplier = 1
    sum = 0
    divider = 1

    for i in range(length, 0 , -2):
        multiplier = multiplier * 100
        digit = int((card_number % multiplier) / divider)
        sum = sum + digit
        divider = divider * 100

    return sum

sum = checksum(card_number)
print(sum)
