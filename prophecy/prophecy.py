from cs50 import SQL

import csv

db = SQL("sqlite:///ros.db")

try:
        with open("students.csv", "r") as file:
            reader = csv.DictReader(file)
            for team in reader:
                team['student_name']
except FileNotFoundError:
        print("FILENAME is not correct")