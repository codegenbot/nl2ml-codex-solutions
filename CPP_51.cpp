```cpp
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

string remove_vowels(string text) {
    string result;
    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        if (std::tolower(c) != 'a' && std::tolower(c) != 'e'
            && std::tolower(c) != 'i' && std::tolower(c) != 'o'
            && std::tolower(c) != 'u')
            result.push_back(c); 
    }
    return result;
}

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);
    string result = remove_vowels(text); 
    cout << "Sentence with vowels removed: " << result << endl;
    return 0;
}