import math

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True

def prime_fib(n: int):
    def fibonacci(n):
        if n <= 1:
            return n
        else:
            return fibonacci(n - 1) + fibonacci(n - 2)

    count = 0
    for num in range(1, n * 5):  # Adjust range for potential nth prime Fibonacci number
        if is_prime(num) and num == fibonacci(num):
            count += 1
            if count == n:
                return num

def main():
    while True:
        n = int(input("Enter the value of n: "))
        if n > 0:
            result = prime_fib(n)
            print(result)
            break
        else:
            print("The input value should be greater than 0.")

if __name__ == "__main__":
    main()