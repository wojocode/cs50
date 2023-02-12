
while True:
    greet = input("Greeting: ")



greet = greet.lower()

if "hello" in greet:
    print("0")
elif greet[0] == "h" and greet != "hello":
    print("20")
else:
    print("100")
