n = int(input())
digits = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 0:
        doubled = digits[i] * 2
        total += doubled if doubled <= 9 else doubled - 9

print(total)