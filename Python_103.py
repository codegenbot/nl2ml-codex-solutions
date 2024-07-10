def rounded_avg():
    n = int(input("Enter the first number: "))
    m = int(input("Enter the second number: "))
    if n > m:
        return -1
    avg = (n + m) // 2
    bin_str = format(avg, "b")
    while len(bin_str) < 32:
        avg += 1
        bin_str = format(avg, "b")
    return bin_str.zfill(32)