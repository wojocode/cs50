import re
from cs50 import get_int, get_string


#prompt user
while True:
    card_number = get_int("enter card number: ")
    if card_number > 0:
        break

def checksum(card_number):
#checking if number length is add or even
    length = len(str(card_number))

    if length % 2 == 0:
        for i in range(length / 2):
            

    else:




checksum(card_number)
# convert int to strin (len(str(card_number)))



