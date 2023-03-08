from cs50 import SQL
import csv

def get_student(name,students):
    students.append({"student_name":name})

def get_house(house,head,houses):
    for h in houses:
        count = 0
        if house in houses:
            count = count + 1
           
            houses.append({"house":house["house"],"head":head})


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

