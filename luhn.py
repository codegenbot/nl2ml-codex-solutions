digits = list(map(int, input().split()))
total = 0

for i in range(len(digits)):
    if i % 2 == 0:
        double_digit = digits[i] * 2
        total += double_digit if double_digit <= 9 else double_digit - 9
    else:
        total += digits[i]

print(total)