from typing import List

def concatenate(strings: List[str]) -> str:
    while True:
        try:
            user_input = input("Enter a list of strings separated by commas or 'q' to quit: ")
            if user_input.lower() == 'q':
                return
            strings = [s.strip() for s in user_input.split(',') if s.strip()]
            if all(isinstance(x, str) for x in strings):
                break
        except ValueError:
            print("Invalid input. Please enter a list of strings separated by commas.")
    return ''.join(strings)