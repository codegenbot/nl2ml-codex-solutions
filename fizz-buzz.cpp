#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << (x % 3 == 0 && x % 5 == 0) ? "FizzBuzz" : 
           (x % 3 == 0) ? "Fizz" : 
           (x % 5 == 0) ? "Buzz" : to_string(x);
}