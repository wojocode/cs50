import re
from cs50 import get_int, get_string


#prompt user
while True:

    card_number = get_int("enter card number: ")

    if re.match("00", str(card_number)):
        continue
    else:
        break


# convert int to strin (len(str(card_number)))
#def checksum(card_number):

   # card_length = (len(str(card_number)))
    #for i in range(1, card_length + 1):

