digits = list(map(int, input().split()))
total = 0
for i, digit in enumerate(digits):
    if i % 2 == 1:  # Start doubling from the second digit (index 1)
        temp = digit * 2
        if temp > 9:
            total += temp - 9
        else:
            total += temp
    else:
        total += digit

print(total)