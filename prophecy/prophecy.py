from cs50 import SQL

import csv

try:
        with open("students.csv", "r") as file:
            reader = csv.DictReader(file)
            for team in reader:
                print(team)
except FileNotFoundError:
        print("FILENAME is not correct")