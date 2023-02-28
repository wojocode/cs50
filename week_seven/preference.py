import csv

with open("preference.csv" , "r") as file:
    reader = csv.DictReader(file)
    counts = dict()
    for row in reader:
        favorits = row["problem"]
        if favorits in counts:
            counts[favorits]+= 1
        else:
            counts[favorits] = 1

#first version - you can pass this function to key atributes but not call it therein because sorted function call it itself
#def get_value(language):
       # return counts[language]


for row in sorted(counts, key= lambda problem: counts[problem], reverse = True):
    print(f"{row}: {counts[row]}")