import csv

with open("preference.csv" , "r") as file:
    reader = csv.DictReader(file)
    count = 0
    di = {}
    for row in reader:
        if row["language"] in reader:
            count += 1
            di["language"] = count
        else:
            count = 1
            di["language"] = count
print(di)