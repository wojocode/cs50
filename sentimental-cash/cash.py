from cs50 import get_float



#prompt user
while True:
    cents = get_float("Change owed: ")
    if cents > 0:
        break

def quarters(cents):
    return int(cents / 25)

def dimes(cents):
    return int(cents / 10)

def nickels(cents):
    return int(cents / 5)

def pennies(cents):
    return int(cents / 1)




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