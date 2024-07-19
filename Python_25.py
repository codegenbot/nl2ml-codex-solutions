try:
    number = int(input("Enter a number: "))
    
    def factorize(number):
        factors = []
        for i in range(1, int(number ** 0.5) + 1):
            if number % i == 0:
                factors.append(i)
                if i != number // i:
                    factors.append(number // i)
        return sorted(factors)

    print(factorize(number))
except ValueError:
    print("Invalid input. Please enter a valid number.")