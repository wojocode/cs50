import re
email = input("type your email: ")
if re.match("[a-z A-Z 0-9 /_/./-]+[@][a-z][/.][a-z]{2,3}", email):
    print("correct email")
else:
    print("incorrect email")

