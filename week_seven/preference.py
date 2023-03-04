# SQL function from cs50 allows me to open a db file in python
from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("problem: ")

rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem =?", favorite)

row = rows[0]
print(row["n"])


