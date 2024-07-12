def find_zero():
    while True:
        try:
            line1 = list(map(float, input("Enter coefficients for the first line (a b): ").split()))
            line2 = list(map(float, input("Enter coefficients for the second line (c d): ").split()))
            if len(line1) != 2 or len(line2) != 2:
                print("Invalid input. Please enter two numbers.")
                continue
            a, b = line1
            c, d = line2
            x = round((d - b) / (a - c), 2)
            return [round(a * x + b, 2), x]
        except ValueError as e:
            print("Invalid input:", str(e))