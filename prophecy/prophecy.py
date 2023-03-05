from cs50 import SQL

#open old database
old_db = SQL("sqlite:///roster.db")
#open new database
new_db = SQL("sqlite:///ros.db")

#get student_name
student_name = old_db.execute("SELECT student_name FROM students")
#insert student_name to new table
for row in student_name:
    new_db.execute("INSERT INTO students (student_name) VALUES(?)",row['student_name'])

#insert house_name to new table
new_db.execute("INSERT INTO houses (house) VALUES (G)")
