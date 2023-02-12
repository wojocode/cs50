people = {
    "Wojtek": "660-511-677", "Mary": "696-048-675"
          }
name = input("name: ")

if name in people:
    print(f"Number: {people[name]}")
else:
    print("not found")
