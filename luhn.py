digits = [int(d) for d in input().split()]

total = 0
for i, digit in enumerate(digits):
    if i % 2 == 1:
        temp = digit * 2
        if temp >= 10:
            total += temp - 9
        else:
            total += temp
    else:
        total += digit

print(total)