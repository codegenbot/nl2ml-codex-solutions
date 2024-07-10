def add(x, y):
    return x + y

def main():
    print("Enter two integers separated by a space. Enter 'stop' to exit.")
    while True:
        try:
            x = int(input().strip())
            if x == 'stop':
                break
            y = int(input().strip())
            result = add(x, y)
            print(result)
        except ValueError:
            print("Error: Invalid input")

if __name__ == "__main__":
    main()