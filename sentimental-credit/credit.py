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
    tens = 0
    units = 0
    for j in range(length - 1, 0 , -2):
        digit = int((card_number % multiplier) / divider) * 2
        if digit >= 10:
            tens = int(digit / 10)
            units = int(digit % 10)
            sum = sum  + tens + units
            multiplier = multiplier * 100
            divider = divider * 100
            tens = 0
            units = 0
        else:
            sum = sum + digit + tens + units
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

#  convert int to string
num = str(card_number)

# AMERICAN EXPRESS
if len(num) == 15 and num[0] == '3' and (num[1] == '7' or num[1] == '4'):
        print("AMEX")

# MASTER CARD
if len(num) == 16 and num[0] == '5' and (num[1] == '1' or num[1] == '2' or num[1] == '3' or num[1] == '4' or num[1] == '5'):
        print("MASTERCARD")

# VISA
if len(num) == 13 and num[0] == '4' or len(num) == 16 and num[0] == '4':
        print("VISA")
