

# prompt user for string
while True:
    text = input("Text: ")
    if len(text) == 0:
        continue
    else:
        break
# letters counter

letters = 0
for i in range(len(text)):
    x = text[i].isalpha
    if x:
        print("no")
    else:
        letters = letters + 1
print(letters)