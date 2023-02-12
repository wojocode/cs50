
while True:
    greet = input("Greeting: ")
    if greet.isalpha():
        break

if greet.lower() != "hello":
    print("100")
elif greet[0].lower() == "h":
    print("20")
else:
    print("0")