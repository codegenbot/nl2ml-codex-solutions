try:
    n = int(input())
    if n > 0:
        print(factorize(n))
    else:
        print("Please enter a positive integer.")
except ValueError:
    print("Please enter a valid integer value.")