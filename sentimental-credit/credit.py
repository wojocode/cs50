import re
from cs50 import get_int, get_string


#prompt user
while True:

    card_number = get_int("enter card number: ")
    print(len(str(card_number)))
    if card_number > 0:
        break



# convert int to strin (len(str(card_number)))
#def checksum(card_number):
    #checking if number length is add or even


