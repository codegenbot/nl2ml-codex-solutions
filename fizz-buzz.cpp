Here is the solution:

int fizzBuzz(int x) {
    if (x % 15 == 0) return "FizzBuzz";
    if (x % 3 == 0) return "Fizz";
    if (x % 5 == 0) return "Buzz";
    return to_string(x);
}