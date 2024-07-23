```
def double_the_difference(lst):
    if len(set(map(int, lst))) != len(lst):
        return "Lists must not contain duplicate elements"
    differences = [(int(a) - int(b)) ** 2 for a, b in zip(lst[::2], lst[1::2])]
    return sum(differences) * 8

input_list = [1, 3, 5]
output = double_the_difference(input_list)
print(output)