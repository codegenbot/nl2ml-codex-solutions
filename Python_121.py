```
def sum_of_odd_numbers_in_every_other_element(input_list):
    try:
        numbers = list(map(int, input("Enter the elements of a list separated by space: ").split()))
        if not numbers:
            raise ValueError
        return sum(i for i in numbers[1::2] if i % 2 != 0)
    except ValueError:
        print("The issue is likely due to an empty file or incorrect formatting.")
        return None

solution = sum_of_odd_numbers_in_every_other_element([])
print(solution)