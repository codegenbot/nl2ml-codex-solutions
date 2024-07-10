def sort_third(l: list):
    return [sorted(l[i:i+3]) if i % 3 == 0 else l[i] for i in range(0, len(l), 3)]

# Test the function
print(sort_third([5, 6, 3, 4, 8, 9, 2, 1]))