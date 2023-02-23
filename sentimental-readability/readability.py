import re

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

# word counter
def word_counter(text):
    words = 0
    for i in range(len(text)):
        x = text[i].isspace()
        if x:
            words = words + 1

    return words + 1

def sentences_counter(text):
    sentences = 0
    for i in range(len(text)):
        x = re.search("46", text[i])
        print(x)
        if x == "46":
            sentences = sentences + 1

    return sentences


print(sentences_counter(text))