from typing import Any, list

def filter_integers() -> None:
    values: list[Any] = []
    
    while True:
        user_inputs = input("Enter values separated by spaces (or 'done' if finished): ").split()
        
        for user_input in user_inputs:
            if user_input.lower() == 'done':
                break
            try:
                values.append(int(user_input))
            except ValueError:
                print(f"'{user_input}' is not an integer. Skipping...")

        if user_input.lower() == 'done':
            break

    filtered_values: list[int] = [value for value in values if isinstance(value, int)]
    
    print("Filtered integers:", filtered_values)

filter_integers()