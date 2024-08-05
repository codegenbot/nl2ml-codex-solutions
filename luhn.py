n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        doubled_digit = digits[i] * 2
        if doubled_digit > 9:
            doubled_digit -= 9
        total += doubled_digit
    else:
        total += digits[i]

print(total)