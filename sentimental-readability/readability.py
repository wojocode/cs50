import string

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
    
    if text[i].ascii_letters:
        letters += 1

print(letters)