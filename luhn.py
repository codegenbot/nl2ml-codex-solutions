input_str = input()
digits = [int(d) for d in input_str.replace(" ", "")]

total = 0
for i, digit in enumerate(digits):
    if i % 2 == 1:
        temp = digit * 2
        if digit > 4:
            total += temp - 9
        else:
            total += temp
    else:
        total += digit

print(total)