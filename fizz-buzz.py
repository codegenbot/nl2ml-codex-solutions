def fizz_buzz(x):
    if x % 15 == 0: 
        return "FizzBuzz"
    elif x % 5 == 0: 
        return "Buzz" if x % 3 == 0 else str(x)
    elif x % 3 == 0: 
        return "Fizz"
    else:
        return str(x)