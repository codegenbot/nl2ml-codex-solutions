def f(n):
    return [1 if i == 1 else i * f(i - 1) if i % 2 == 1 else sum(range(1, i + 1)
            for i in range(1, n + 1)] 

print(f(3))  # Output: [1, 2, 6]