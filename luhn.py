digits = list(map(int, input().split()))
total = 0
for i in range(16):
    if i % 2 == 1:
        digit = digits[i] * 2
        if digit > 9:
            digit -= 9
        total += digit
print(total)