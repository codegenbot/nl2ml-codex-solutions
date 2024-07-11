```
def fizz_buzz(n: int):
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += " Buzz" if output else "Buzz"
        output = str(i) if not output else output
    return output

print(fizz_buzz(int(input("Enter a number: "))))