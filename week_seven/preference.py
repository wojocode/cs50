# SQL function from cs50 allows me to open a db file in python
from cs50 import SQL

db = SQL("sqlite:///database.db")

favorite = input("problem: ")

rows = db.execute("SELECT * from ps WHERE problem='Mario'")

for row in rows:
    print(row["language"])



