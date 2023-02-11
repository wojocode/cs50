# Logical operators
from cs50 import get_string

# Prompt user to agree
s = get_string("Do you agree? ")
x = s.lower()
# Check whether agreed
if x in ["yes" , "y"]:
    print("Agreed.")
elif x in ["no","n"]:
    print("Not agreed.")