try:
    numbers = list(map(int, input("Enter the numbers separated by space: ").split()))
    print(sum(numbers))
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")