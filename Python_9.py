numbers = []
try:
    while True:
        num = input("Enter a number or type 'stop' to end: ").strip()
        if num == 'stop':
            break
        if num.isdigit():
            numbers.append(int(num))
        else:
            print("Invalid input. Please enter a valid number.")
except KeyboardInterrupt:
    pass