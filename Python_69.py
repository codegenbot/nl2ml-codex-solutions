```
def search(lst):
    freq = {}
    for num in lst:
        if num > 0:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
    max_num = -1
    max_count = 0
    for num, count in freq.items():
        if num >= count and num > 0 and count > max_count:
            max_num = num
            max_count = count
    return max_num

lst = input("Enter numbers separated by space: ")
try:
    lst = [int(i) for i in lst.split()]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    exit()

print(search(lst))