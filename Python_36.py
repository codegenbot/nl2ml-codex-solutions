```
def fizz_buzz(n: int):
    result = []
    for i in range(1, n + 1):
        if i % 15 == 0:
            result.append("FizzBuzz")
        elif i % 3 == 0:
            result.append("Fizz" if i % 5 != 0 else "FizzBuzz")
        elif i % 5 == 0:
            result.append("Buzz" if i % 3 != 0 else "FizzBuzz")
        else:
            result.append(str(i))
    return sum(1 for x in result if x == "FizzBuzz")