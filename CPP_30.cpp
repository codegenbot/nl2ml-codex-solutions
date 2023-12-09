[PYTHON]
def get_positive(my_list):
    return [i for i in my_list if i > 0]

def issame(a, b):
    return a == b

def main():
    l1 = [1, 2, 3, -4, 5]
    l2 = [1, 2, 3, 4, 5]
    print("Positive elements in l1:", get_positive(l1))
    if issame(get_positive(l1), get_positive(l2)):
        print("The positive elements in l1 and l2 are the same")
    else:
        print("The positive elements in l1 and l2 are not the same")

if __name__ == "__main__":
    main()
[/PYTHON]
[TESTS]
# Test case 1:
l1 = [1, 2, 3, -4, 5]
l2 = [1, 2, 3, 4, 5]
assert get_positive(l1) == [1, 2, 3, 5]
# Test case 2:
l1 = [-1, -2, -3, -4, -5]
l2 = [1, 2, 3, 4, 5]
assert get_positive(l1) == []
# Test case 3:
l1 = [1, 2, 3, -4, 5]
l2 = [1, 2, 3, 4, 5]
assert issame(get_positive(l1), get_positive(l2)) == True
# Test case 4:
l1 = [-1, -2, -3, -4, -5]
l2 = [1, 2, 3, 4, 5]
assert issame(get_positive(l1), get_positive(l2)) == False
[/TESTS]
```