import csv

with open("preference.csv" , "r") as file:
    reader = csv.DictReader(file)
    counts = dict()
    for row in reader:
        if row["language"] in reader:
            favorits = row["language"]
            counts[favorits]+= 1
        else:
            counts[favorits] = 1

print(counts)