from cs50 import SQL
import csv

def get_student(name,students):
    students.append({"student_name":name})



#declare lists
students = []
houses = []
combine = []

with open('students.csv', "r") as csvfile:
    rows = csv.DictReader(csvfile)
    for row in rows:
        name = row["student_name"]

        get_student(name,students)


# insert lists to database
db = SQL("sqlite:///roster.db")
