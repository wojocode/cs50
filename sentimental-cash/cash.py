from cs50 import get_float

#prompt user
while True:
    cents = get_float("Change owed: ")
    if cents > 0:
        break



def quarters(cents):
    return ( cents * 100) / 25

def dimes(cents):
    return ( cents * 100) / 10

def nickels(cents):
    return ( cents * 100) / 5

def pennies(cents):
    return ( cents * 100) / 1