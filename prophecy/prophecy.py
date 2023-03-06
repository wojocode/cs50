from cs50 import SQL

db = SQL("sqlite:///roster.db")

new_db = SQL("sqlite:///database.db")

#select students_name
rows = db.execute("SELECT student_name from students")
#inser student_name
for row in rows:
        new_db.execute("INSERT INTO students (student_name) VALUES (?)",row['student_name'])

#select houses and head
rows = db.execute("SELECT house,head FROM students GROUP BY house,head")
#insert houses, head
for row in rows:
        new_db.execute("INSERT INTO houses (house,head) VALUES (?,?)",row['house'],row['head'])

#select student id and house
rows = db.execute("SELECT id,house from students")
#insert student_id , house_id
for row in rows:
        hous = new_db.execute("SELECT id FROM houses WHERE house = ?",row['house'])
        for r in hous:
                new_db.execute("INSERT INTO house_assignment (student_id,house_id) VALUES (?,?)",row['id'],r['id'])

