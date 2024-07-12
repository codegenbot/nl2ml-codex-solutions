def calculate_decimal_part(number):
    return abs(number) % 1


while True:
    try:
        input_number = float(raw_input("Enter a number: ").strip())
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(calculate_decimal_part(input_number))