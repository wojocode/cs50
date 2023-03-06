from cs50 import SQL

db = SQL("sqlite:///roster.db")

new_db = SQL("sqlite:///database.db")

#select students_name
rows = db.execute("SELECT student_name from students")
#inser student_name
for row in rows:
        new_db.execute("INSERT INTO students (student_name) VALUES (?)",row['student_name'])


