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
cents = round(cents - (quarters_ * 0.25) , 2)


dimes_ = dimes(cents)
cents = round(cents - (dimes_ * 0.10) , 2)


nickels_ = nickels(cents)
cents = round(cents - (nickels_ * 0.05) , 2)


pennies_ = pennies(cents)
cents = round(cents - (pennies_ * 0.01) , 2)


sum = quarters_ + dimes_ + nickels_ + pennies_

print(int(sum))