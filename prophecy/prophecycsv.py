from cs50 import SQL
import csv

def get_student(student,students):
    students.append({"student_name":student})




#declare lists
students = []
houses = []
combine = []

with open('students.csv', "r") as csvfile:
    rows = csv.DictReader(csvfile)
    for row in rows:
        get_student(row["student_name"],students)

print(students)