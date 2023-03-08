from cs50 import SQL
import csv

#declare lists
students = []
houses = []
combine = []

with open('students.csv', "r") as csvfile:
    rows = csv.DictReader(csvfile):
    for row in rows:
        