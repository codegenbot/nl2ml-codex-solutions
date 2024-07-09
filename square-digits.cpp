```cpp
#include <string>
using namespace std;

string& squareDigits(string& input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0'; 
        output += to_string(digit * digit); 
    }
    input = output;
    return input;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}