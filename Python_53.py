```
def add_numbers():
    print("Please enter two numbers.")
    while True:
        x = input("Enter first number: ")
        y = input("Enter second number: ")
        if x.strip() and y.strip():  
            return int(x) + int(y)


result = add_numbers()
print(result)