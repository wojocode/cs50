
while True:
    greet = input("Greeting: ")
    if greet.isalpha():
        break

if greet[0].lower() == "h":
    if greet.lower() != "hello":
        print("100")
    else:
        print("20")

else:
    print("100")