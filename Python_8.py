from typing import list, Tuple

def sum_product():
    numbers = input("Enter numbers (space-separated): ").split()
    numbers = [int(num) for num in numbers]
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product)

print(sum_product())