from cs50 import SQL

db = SQL("sqlite:///roster.db")

new_db = SQL("sqlite:///database.db")

rows = db.execute("SELECT student_name from students")
new_db.execute("INSERT )

