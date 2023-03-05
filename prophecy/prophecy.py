from cs50 import SQL

import csv

db = SQL("sqlite:///database.db")

try:
        with open("students.csv", "r") as file:
            reader = csv.DictReader(file)

            for team in reader:
                db.execute("INSERT INTO students (student_name) VALUES (?)",team['student_name'])
                db.execute("INSERT INTO houses (house) VALUES (?)",team['house'])
except FileNotFoundError:
        print("FILENAME is not correct")