#include <string>
using namespace std;

string make_palindrome(string input) {
    // implementation
}

int main() {
    string input, output;
    cout << "Enter a string: ";
    cin >> input;
    output = make_palindrome(input);
    cout << "Palindrome of the given string is: " << output << endl;
    return 0;
}