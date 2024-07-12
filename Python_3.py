```
from typing import List

def below_zero() -> bool:
    while True:
        temperature_list = list(map(int, input("Enter temperatures separated by space: ").split()))
        if not temperature_list:  
            print("Invalid input. Please try again.")
            continue
        if all(temp < 0 for temp in temperature_list):
            return True
        elif any(temp < 0 for temp in temperature_list):
            return False