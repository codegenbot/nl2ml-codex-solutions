```
def correct_bracketing(expression):
    if isinstance(expression, str): 
        stack = []
        for char in expression:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if len(stack) == 0:
                    return False
                else:
                    stack.pop()
        if len(stack) > 0:
            return False
    else: 
        print("Invalid input. Please enter a valid mathematical expression.")
    
    return True

def check(correct_bracketing):
    while True:
        try:
            expression = input("Enter an expression (or 'done' if finished): ")
            if expression.lower() == "done":
                break
            if correct_bracketing(expression):
                print("Correct bracketing!")
            else:
                print("Incorrect bracketing. Try again.")
        except Exception as e: 
            print(f"Error occurred: {e}")

check(correct_bracketing)