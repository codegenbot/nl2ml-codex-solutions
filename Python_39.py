try:
    n = int(input())
except ValueError:
    print("Invalid input. Please enter a valid integer.")
    exit()

def prime_fib(n):
    if n <= 1:
        return "Not Prime"
    elif n == 2:
        return "Prime"
    else:
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return "Not Prime"
        return "Prime"

print(prime_fib(n))