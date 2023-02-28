import csv

with open("preference.csv" , "r") as file:
    reader = csv.DictReader(file)
    count = 0
    for row in reader:
        if row["language"] in reader:
            count += 1
        else:
            count = 1

