```cpp
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    
    while (i < str.length()) {
        if (str.find(" ", i) == -1) {
            result += str.substr(i);
            break;
        } else {
            int j = str.find(" ", i);
            if (j + 1 < str.length() && std::isupper(str.at(j + 1))) {
                for(int k = 0; k < j/2; k++) {
                    swap(str[k], str[j - k - 1]);
                }
            }
            result += str.substr(i, j - i);
            i = j + 1;
        }
    }
    
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence ('quit' to stop): ";
        cin >> str;
        if (str == "quit") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}