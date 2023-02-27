text = "Wojtas jest wymiataczem"

words = text.split()
for word in words:
  for i in word:
    print(i,end=" # ")
print()