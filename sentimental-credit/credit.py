from cs50 import get_int

#prompt user
while True:
    card_number = get_int("enter card number: ")
    if card_number > 0 and str(card_number)[0] != 0:
        break

# convert int to strin (len(str(card_number)))
#def checksum(card_number):
