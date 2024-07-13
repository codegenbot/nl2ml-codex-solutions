def find_zero():
    while True:
        try:
            coefficients = [float(i) for i in input().split()]
            if len(coefficients) != 3:
                print("Invalid input. Please provide exactly three coefficients.")
            else:
                a, b, c = coefficients
                if b**2 - 4 * a * c < 0:
                    return "Program did not receive expected input"
                x1 = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
                x2 = (-b - (b**2 - 4 * a * c) ** 0.5) / (2 * a)
                return f"The zero points are {x1:.2f} and {x2:.2f}."
        except Exception as e:
            print(f"Error: {str(e)}")