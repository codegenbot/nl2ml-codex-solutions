def solution():
    while True:
        try:
            first_half_sum = int(input("Enter first half sum: "))
            second_half_sum = int(input("Enter second half sum: "))
            return abs(first_half_sum - 2*second_half_sum)
        except ValueError:
            print("Invalid input. Please enter a whole number for both sums.")

while True:
    answer = solution()
    if answer == 0:
        print("The result is zero.")
    else:
        print("The absolute difference between the two sums is: ", answer)
    response = input("Would you like to continue? (yes/no): ")
    if response.lower() != "yes":
        break