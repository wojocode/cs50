import re
import sys
from cs50 import get_int, get_string

while True:
    card_number = get_int("enter card number: ")
    if card_number > 0:
        break

def checksum(card_number):

    length = len(str(card_number))
    multiplier = 10
    sum = 0
    divider = 1

    for i in range(length, 0 , -2):
        digit = int((card_number % multiplier) / divider)
        multiplier = multiplier * 100
        sum = sum + digit
        divider = divider * 100
    last = sum

    multiplier = 100
    sum = 0
    divider = 10

# getting every other digit multiplying by 2
    a = 0
    b = 0
    for j in range(length - 1, 0 , -2):
        digit = int((card_number % multiplier) / divider) * 2
        if digit >= 10:
            a = int(digit / 10)
            b = int(digit % 10)
            sum = sum  + a + b
            multiplier = multiplier * 100
            divider = divider * 100
            a = 0
            b = 0
        else:
            sum = sum + digit + a + b
            multiplier = multiplier * 100
            divider = divider * 100
    second = sum

    result = last + second
    if result % 10 == 0:
        return True
    else:
        return False
#checking sum

final = checksum(card_number)

if final != True:
    print("INVALID")
    sys.exit(1)

# AMERICAN EXPRESS check

num = str(card_number)

if len(num) == 15 and num[0] == '3' and (num[1] == '7' or num[1] == '4'):
        print("AMEX")
