int main() {
    int x; // variable declaration
    std::cin >> x;
    return (x % 3 == 0 && x % 5 == 0) ? "FizzBuzz" : 
           (x % 3 == 0) ? "Fizz" : 
           (x % 5 == 0) ? "Buzz" : std::to_string(x);
}