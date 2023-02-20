from cs50 import get_float



#prompt user
while True:
    cents = get_float("Change owed: ")
    if cents > 0:
        break

def quarters(cents):
    return (cents * 100) / 25

def dimes(cents):
    return (cents * 100) / 10

def nickels(cents):
    return (cents * 100) / 5

def pennies(cents):
    return (cents * 100) / 1



quarters_ = quarters(cents)
cents = cents - (quarters_ * 25)

dimes_ = dimes(cents)
cents = cents - (dimes_ * 10)

nickels_ = nickels(cents)
cents = cents - (nickels_ * 10)

pennies_ = pennies(cents)
cents = cents - (pennies_ * 1)

sum = quarters_ + dimes_ + nickels_ + pennies_
print(sum)