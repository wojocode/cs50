# SQL function from cs50 allows me to open a db file in python
from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("problem: ")

rows = db.execute("SELECT * FROM favorites WHERE problem ='mario'")

for row in rows:
    print(row["language"])



