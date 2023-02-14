
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

#open the bill
bill = 0

#prompting user until press ctrl d
while True:
    try:
        item = input("Item: ")
        item = item.title()
        if item in menu:
            #update bill
            bill = bill + menu[item]
            print(f"Total: {bill:.2f}")
    except EOFError:
        print()
        break



