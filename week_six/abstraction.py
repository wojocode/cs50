from cs50 import get_int 

def main():
    x = get_int("how much $ do you need ? ")
    dollar(x)

def dollar(n):
    for i in range(n):
        print("$")

main()
