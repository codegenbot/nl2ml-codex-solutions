```
def search():
    while True:
        lst = input("Enter a list of numbers (space separated): ").split()
        freq_dict = {}
        for num in [int(n) for n in lst]:
            if num > 0:
                if num in freq_dict:
                    freq_dict[num] += 1
                else:
                    freq_dict[num] = 1
            else:
                print("Please enter only positive numbers. Try again!")
                break
        if not freq_dict:
            return -1
        max_num = max(freq_dict.keys())
        return max_num if max_num > 0 else -1

print(search())