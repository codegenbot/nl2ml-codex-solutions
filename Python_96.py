```Python
def count_up_to(n):
    result = []
    for i in range(1, n+1):
        result.append(i)
    return result

def check(lst):
    odd_count = sum(1 for num in lst if num % 2 != 0)
    return odd_count > 0

n = int(input("Enter a number: "))
numbers_list = count_up_to(n)
if check(numbers_list):
    print("The numbers are even.")
else:
    print("The numbers are not all even.")