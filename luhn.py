digits = list(map(int, input().split()))

total = 0
for i in range(len(digits)):
    if i % 2 == 1:
        temp = digits[i] * 2
        if temp > 9:
            total += temp - 9
        else:
            total += temp
    else:
        total += digits[i]

print(total)