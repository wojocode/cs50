import re

zdanie = "wojtek! chce mieć? kota."

x = re.search("?!.+",zdanie)
print(x)