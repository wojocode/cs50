import re
import sys
from cs50 import get_int, get_string

while True:
    card_number = get_int("enter card number: ")
    if card_number > 0:
        break

# retrun true if checksum reminder % 10 equal 0 and false oderwise


def checksum(card_number):

    length = len(str(card_number))
    multiplier = 10
    sum = 0
    divider = 1
    for i in range(length, 0, -2):
        digit = int((card_number % multiplier) / divider)
        multiplier = multiplier * 100
        sum = sum + digit
        divider = divider * 100
    first_sum = sum

# getting every other digit multiplying by 2
    multiplier = 100
    sum = 0
    divider = 10
    tens = 0
    units = 0
    for j in range(length - 1, 0, -2):
        digit = int((card_number % multiplier) / divider) * 2
        if digit >= 10:
            tens = int(digit / 10)
            units = int(digit % 10)
            sum = sum + tens + units
            multiplier = multiplier * 100
            divider = divider * 100
            tens = 0
            units = 0
        else:
            sum = sum + digit + tens + units
            multiplier = multiplier * 100
            divider = divider * 100
    second_sum = sum

# add sums
    result = first_sum + second_sum

# checking sum
    if result % 10 == 0:
        return True
    else:
        return False


final = checksum(card_number)

if final != True:
    print("INVALID\n")
    sys.exit(1)

# convert int to string
number = str(card_number)

# AMERICAN EzXPRESS
if re.match("[3][47][0-9]{13}", number): # regex : first number 3 , second 4 or 7 and than 13 digit from [0-9]
    print("AMEX\n")

# MASTER CARD
elif re.match("[5][1-5][0-9]{14}", number):
    print("MASTERCARD\n")

# VISA
elif re.match("[4][0-9]{12}", number) or re.match("[4][0-9]{15}", number):
    print("VISA\n")
else:
    print("INVALID\n")