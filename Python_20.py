def check(lst):
    if len(set(lst)) == 1:
        return "All elements are equal"
    elif len(lst) == len(set(lst)):
        return "All elements are unique"
    else:
        return "Some elements are equal and some are not"

lst = list(map(int, input().split()))
print(check(lst))