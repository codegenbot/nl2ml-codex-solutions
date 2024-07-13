```
def mean_absolute_deviation():
    while True:
        numbers = []
        while not numbers:
            input_str = input("Enter some numbers (space-separated): ")
            if not input_str:
                print("Please enter at least one number.")
                continue
            try:
                numbers = [float(num) for num in input_str.split()]
                if len(numbers) == 0:
                    print("Please enter at least one number.")
                    continue
                break
            except ValueError:
                print("Invalid input. Please enter numbers only.")

        response = input("Do you want to calculate again? (yes/no): ").lower()
        while response != "no":
            if len(numbers):
                mean = sum(numbers) / len(numbers)
                mad = sum(abs(x - mean) for x in numbers) / len(numbers)

                print(f"Mean: {mean:.2f}, Mean Absolute Deviation: {mad:.2f}")
            else:
                print("Please enter at least one number.")
            response = input("Do you want to calculate again? (yes/no): ").lower()

        if response == "no":
            break


if __name__ == "__main__":
    mean_absolute_deviation()