def fizz_buzz(n: int):
    count = sum(
        1
        for i in range(1, n + 1)
        if (
            ((i % 3 == 0 or i % 5 == 0))
            or ("7" in str(i))
            or any(char == '7' for char in str(i))
            or i % 7 == 0
        )
        and all(i % num != 0 for num in [13, 15, 35, 33, 77])
    )
    return count

print(fizz_buzz(100000))  # Output should be 8026