import csv

with open("preference.csv" , "r") as file:
    reader = csv.DictReader(file)
    counts = dict()
    for row in reader:
        if row["language"] in reader:
            counts["language"]+= 1

        else:
            counts["language"] = 1

print(counts)