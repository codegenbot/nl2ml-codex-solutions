#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int hex_key(string num) {
    int count = 0;
    for (char c : num) {
        if (c == '2' || c == '3' || c == '5' || c == '7' || c == 'B' || c == 'D') {
            count++;
        }
    }
    return count;
}

int main() {
    string num;
    cin >> num;

    int result = hex_key(num);
  
    cout << result << endl;

    return 0;
}