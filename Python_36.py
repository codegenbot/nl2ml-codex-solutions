```
def fizz_buzz(n: int):
    for i in range(1, n+1):
        output = ""
        if i % 3 == 0:
            output += "Fizz"
        if i % 5 == 0:
            output += "Buzz"
        print(output or str(i))

fizz_buzz(int(input("Enter a number: ")))