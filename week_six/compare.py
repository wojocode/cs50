from cs50 import get_string

answer = get_string("Do you agree ?")

if answer == "Yes" or "y":
    print("Agree")
elif answer == "No" or "n":
    print("Not agree")
