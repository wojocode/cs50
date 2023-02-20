from cs50 import get_float

#prompt user
while True:
    cents = get_float("Change owed: ")
    if cents > 0:
        break



def quarters(cents):

    return int((cents * 100) / 25)

def dimes(cents):
    return int((cents * 100) / 10)

def nickels(cents):
    return int((cents * 100) / 5)

def pennies(cents):
    return int((cents * 100) / 1)


quarters_ = quarters(cents)
cents = cents - (quarters_ * 0.25)
cents = round(cents, 2)

dimes_ = dimes(cents)
cents = cents - (dimes_ * 0.10)
cents = round(cents, 2)

nickels_ = nickels(cents)
cents = cents - (nickels_ * 0.05)
cents = round(cents, 2)

pennies_ = pennies(cents)
cents = cents - (pennies_ * 0.01)
cents = round(cents, 2)

sum = quarters_ + dimes_ + nickels_ + pennies_

print(int(sum))