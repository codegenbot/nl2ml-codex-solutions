try:
    n = int(input("Enter a number: "))
except ValueError:
    print("Invalid input. Please enter a valid number.")

def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

result = factorize(n)
print(result)