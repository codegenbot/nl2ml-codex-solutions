
def count_up_to(n):
    # Create a list of all numbers from 2 to n
    numbers = list(range(2, n + 1))
    
    # Iterate over the numbers and mark as composite if they are divisible by a prime number less than or equal to its square root
    for i in range(2, int(n**0.5) + 1):
        if numbers[i] % i == 0:
            numbers[i] = 0
    
    # Return the remaining prime numbers
    return [x for x in numbers if x != 0]