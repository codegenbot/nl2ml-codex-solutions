def fizz_buzz(n: int):
    count = 0
    fizzbuzz_count = 0
    for i in range(1, n + 1):
        output = "FizzBuzz" if i % 15 == 0 else "Fizz" if i % 3 == 0 else "Buzz" if i % 5 == 0 else str(i)
        print(output)
        if output == "FizzBuzz":
            fizzbuzz_count += 1
    return fizzbuzz_count