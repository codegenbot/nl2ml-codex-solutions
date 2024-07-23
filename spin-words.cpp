```cpp
#include <iostream>
#include <string>

using namespace std;

std::string spinWords(std::string str) {
    std::string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        
        if (end == string::npos)
            end = str.length();
        
        std::string word = str.substr(start, end - start);
        
        if (word.length() >= 5)
            reverse(word.begin(), word.end());
        
        result += word + " ";
        
        start = end + 1;
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        cin >> str;
        cout << spinWords(str) << endl;
    }
    return 0;
}