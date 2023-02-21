import re
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
    for j in range(length - 1, 0 , -2):
        digit = int((card_number % multiplier) / divider) * 2
        multiplier = multiplier * 100
        sum = sum + digit
        divider = divider * 100
    second = sum

    result = last + second
    if result % 10 == 0:
        return True
    else:
        return False


final = checksum(card_number)
print(final)