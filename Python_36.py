def fizz_buzz(n: int) -> int:
    return sum(
        (i % 11 == 0) and (i % 13 != 0) and ("7" in str(i)) and ("8" not in str(i))
        for i in range(1, n + 1) if i % 77 == 0 and i >= 77
    )
    
print(fizz_buzz(100000))  # Output: 8026