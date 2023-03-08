from cs50 import SQL
import csv

def get_student(name,students):
    students.append({"student_name":name})

def get_house(house,head,houses):
    count = 0
    for h in houses:
        if h in houses:
            count+= 1
    if count == 0:
        houses.append({"house":house,"head":head})


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

print(houses)




#open database
#db = SQL("sqlite:///roster.db")

# insert lists to database
#student
#for row in students:
   # db.execute("INSERT INTO new_student (student_name) VALUES (?)",row["student_name"])

