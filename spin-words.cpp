#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t start = 0;
    
    while (start < str.length()) {
        size_t end = str.find(' ', start);
        
        if (end == string::npos)
            end = str.length();
        
        string word = str.substr(start, end - start);
        
        if (word.length() >= 5)
            result += (word.rbegin(), word.rend(), 1) + " ";
        else
            result += word + " ";
        
        start = end + 1;
    }
    
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        getline(cin, str);
        
        if(str == "quit" || str == "exit") break; 
        else if(str.empty()) {
            cout << "Invalid input. Please enter a string." << endl;
        } else {
            cout << spinWords(str) << endl;
        }
    }
}