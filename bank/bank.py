
while True:
    greet = input("Greeting: ")
    if greet.isalnum():
        break


greet = greet.lower()

if "hello" in greet:
    print("0")
elif greet[0] == "h" and greet != "hello":
    print("20")
else:
    print("100")
