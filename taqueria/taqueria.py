
import sys

menu = {
    "Baja Taco": 4.00,
    "Burrito": 7.50,
    "Bowl": 8.50,
    "Nachos": 11.00,
    "Quesadilla": 8.50,
    "Super Burrito": 8.50,
    "Super Quesadilla": 9.50,
    "Taco": 3.00,
    "Tortilla Salad": 8.00
}
#prompting user
try:
    item = input("Item: ")
    item = item.title()
    if item in menu:
        bill += menu[item]
        print(f"total: {bill}")


except EOFError:
    print()
    sys.exit(1)

