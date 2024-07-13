```
def search(lst):
    freq_dict = {}
    for num in lst:
        if num in freq_dict:
            freq_dict[num] += 1
        else:
            freq_dict[num] = 1
    max_num = -1
    for key, value in freq_dict.items():
        if key > 0 and value >= key:
            max_num = key
    return max_num

def main():
    while True:
        lst = list(map(int, input("Enter the numbers separated by space: ").split()))
        if all(isinstance(x, int) for x in lst):
            break
    print(search(lst))

if __name__ == "__main__":
    main()