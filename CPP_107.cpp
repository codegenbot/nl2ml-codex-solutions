```cpp
#include <iostream>
#include <vector>

std::vector<int> even_odd_palindrome(int n) {
    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++) {
        if (i == reverse(i)) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    return std::vector<int>( {even, odd} );
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::vector<int> result = even_odd_palindrome(n);

    std::cout << "Number of even palindromes: " << result[0] << std::endl;
    std::cout << "Number of odd palindromes: " << result[1] << std::endl;
}

int reverse(int n) {
    int rev = 0;
    while (n != 0) {
        int remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    return rev;
}