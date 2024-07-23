digits = [int(d) for d in input().split()]

total = 0
for i, digit in enumerate(digits):
    if i % 2 == 0:  # Change the condition from 1 to 0
        temp = digit * 2
        if temp > 9:
            total += temp - 9
        else:
            total += temp
    else:
        total += digit

print(total)