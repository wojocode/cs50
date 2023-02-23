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

# sentences counter
def sentences_counter(text):
    sentences = 0
    for i in range(len(text)):
        x = re.match("[/.!?]", text[i])
        print(x)
        if x:
            sentences = sentences + 1

    return sentences

# Coleman-Liau index
def Coleman_Liau_index(L,S):

    L = (letters_counter(text) / word_counter(text)) * 100
    S = (sentences_counter(text) / word_counter(text)) * 100
    return round(0.0588 * L - 0.296 * S - 15.8)


result = Coleman_Liau_index(L,S)
