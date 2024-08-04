n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 0:  # Start the loop from index 0
        double = digits[i] * 2
        if double > 9:
            total += double - 9
        else:
            total += double
    else:
        total += digits[i]

print(total)