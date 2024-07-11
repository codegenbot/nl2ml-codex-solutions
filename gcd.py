```
values = input("Enter two integers (separated by space): ")
if len(values.split()) != 2:
    print("Invalid input! Please enter exactly two integers.")
else:
    a, b = map(int, values.split())
    def gcd(a, b):
        while b != 0:
            a, b = b, a % b
        return a
    print(gcd(a, b))