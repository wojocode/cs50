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

#get house_name
house_name = old_db.execute("SELECT house FROM students GROUP BY house")
#insert house_name to new table
for row in house_name:
    new_db.execute("INSERT INTO houses (house) VALUES(?)",row['house'])

#get assignment
house_assignment = old_db.execute("SELECT id,house FROM students")

#insert assignment
for row in house_assignment:
    assign = new_db.execute("SELECT id FROM houses WHERE house = ? LIMIT 10",row['house'])
    print(assign)
    #new_db.execute("INSERT INTO house_assignment (student_id,house_id) VALUES(?,?)",row['id'],assign)
