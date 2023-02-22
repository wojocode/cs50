

# prompt user for string
while True:
    text = input("Text: ")
    if len(text) == 0:
        continue
    else:
        break


# letters counter
def letters_counter(text):

    letters = 0

    for i in range(len(text)):
        x = text[i].isalpha()
        if x:
            letters = letters + 1

    return letters

