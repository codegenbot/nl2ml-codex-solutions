
def add(x: int, y: int):
    return x + y

# Accept user input for x and y
import sys
x = int(sys.stdin.readline())
y = int(sys.stdin.readline())

# Call the add function with the input values
result = add(x, y)

# Print the result to the console
print("Result:", result)