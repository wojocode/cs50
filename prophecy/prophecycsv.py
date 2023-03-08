from cs50 import SQL
import csv

def get_student(name,students):
    students.append({"student_name":name})

def get_house(house,head,houses):
    #adding unique values to houses list
    count = 0
    for h in houses:  # iterate houses
        if h["house"] == house: # checking values from list with arg
            count = count + 1 # if the same increment count
    if count == 0: 
        houses.append({"house":house,"head":head})

def get_combine(name,house):
    combine.append({"student_name":name, "house":house})


#declare lists
students = []
houses = []
combine = []

with open('students.csv', "r") as csvfile:
    rows = csv.DictReader(csvfile)
    for row in rows:
        name = row["student_name"]
        house = row["house"]
        head = row["head"]
        get_student(name,students)
        get_house(house,head,houses)
        get_combine(name,house)


#open database
db = SQL("sqlite:///roster.db")

#insert lists to database
#student
for row in students:
   db.execute("INSERT INTO new_students (student_name) VALUES (?)",row["student_name"])

#house,head
for row in houses:
   db.execute("INSERT INTO houses (house,head) VALUES (?,?)",row["house"],row["head"])

#combine
for row in combine:
    db.execute("INSERT INTO house_assignment (student_name,house) VALUES (?,?)",row['student_name'],row['house'])