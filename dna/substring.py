text = "ABCDCTCDC"
sub_string = "DCT"

counter = 0

for i in range(len(text)):
    if text[i:i+len(sub_string)] == sub_string:
        counter += 1

print(counter)