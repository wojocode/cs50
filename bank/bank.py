
while True:
    greet = input("Greeting: ")
    if greet.isspace() != True:
        break

greet = greet.lower()

if greet[0] == "h" and greet != "hello":
    print("20")
elif greet == "hello":
    print("0")
else:
    print("100")
