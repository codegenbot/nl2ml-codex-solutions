```
def main():
    while True:
        num = input("Enter a number: ")
        p = input("Enter the prime number: ")

        try:
            num = int(num)
            p = int(p)
            break
        except ValueError:
            print("Invalid input. Please enter numbers.")

    if is_prime(p):
        power_result = modp(num, p) 
        print(f"{num} to the power of {p} mod {p} is {power_result}")
    else:
        print("The given prime number is not valid. Please enter a prime number.")


def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


def modp(num, p):
    return num ** p % p