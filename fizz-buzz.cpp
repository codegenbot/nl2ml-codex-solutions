string fizzBuzz(int num) {
    if (num % 15 == 0) {
        return "FizzBuzz";
    } else if (num % 5 == 0 && num % 3 != 0) { 
        return "Buzz";
    } else if (num % 3 == 0 && num % 5 != 0) {
        return "Fizz";
    } else {
        return to_string(num);
    }
}