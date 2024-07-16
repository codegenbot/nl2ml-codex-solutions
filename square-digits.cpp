```cpp
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input; 
    string output = squareDigits(input);
    cout << output << endl;  
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        output += to_string(digit * digit);
    }
    return output;
}