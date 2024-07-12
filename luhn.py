n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(len(digits)):
    if (i + 1) % 2 == 0:  # Indexing starts from 0
        double_digit = digits[i] * 2
        if double_digit > 9:
            total += double_digit - 9
        else:
            total += double_digit
    else:
        total += digits[i]

print(total)