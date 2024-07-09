def rolling_max(numbers):
    return [max(numbers[i:i+3]) for i in range(len(numbers)-2)]

numbers = [int(num) for num in input().split()]
print(rolling_max(numbers))