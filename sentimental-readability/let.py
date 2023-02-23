import re

number = "660511677"

x = re.search("[67][0-9]{8}",number)
print(x)