```
def square_digits(n):
    return "".join(str(int(i) ** 2) for i in str(n))

n = int(input("Enter a positive integer: "))
print(square_digits(n))