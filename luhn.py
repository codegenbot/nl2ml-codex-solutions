digits = list(map(int, input().split()))

total = 0
for i in range(len(digits)):
    if (i + 1) % 2 == 0:
        double = digits[i] * 2
        if double > 9:
            total += double - 9
        else:
            total += double
    else:
        total += digits[i]

print(total)