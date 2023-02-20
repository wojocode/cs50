from cs50 import get_float

#prompt user
while True:
    cents = get_float("Change owed: ")
    if cents > 0:
        break



def quarters(cents):
    return (cents * 100 ) /25

