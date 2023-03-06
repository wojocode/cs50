CREATE TABLE students (
    id INTEGER NOT NULL,
    student_name TEXT NOT NULL,
    PRIMARY KEY(id)
);
CREATE TABLE houses (
    id INTEGER NOT NULL,
    house TEXT NOT NULL ,

    PRIMARY KEY(id)
);
CREATE TABLE house_assignment (
    student_id  INT NOT NULL,
    house_id  INT NOT NULL,
    FOREIGN KEY(student_id) REFERENCES students(id),
    FOREIGN KEY(house_id) REFERENCES houses(id)
);



from cs50 import SQL

db = SQL("sqlite:///roster.db")

new_db = SQL("sqlite:///database.db")

#select students_name
rows = db.execute("SELECT student_name from students")
#inser student_name
for row in rows:
        new_db.execute("INSERT INTO students (student_name) VALUES (?)",row['student_name'])

#select houses
rows = db.execute("SELECT house FROM students GROUP BY house")
#insert houses
for row in rows:
        new_db.execute("INSERT INTO houses (house) VALUES (?)",row['house'])

#select student
rows = db.execute("SELECT id,house from students")
#insert student
for row in rows:
        hous = new_db.execute("SELECT id FROM houses WHERE house = ?",row['house'])
        for r in hous:
                new_db.execute("INSERT INTO house_assignment (student_id,house_id) VALUES (?,?)",row['id'],r['id'])




