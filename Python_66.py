def digitSum(num):
    n = int(input("Enter a number: "))
    return sum(int(digit) for digit in str(n))