#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word, result;
    stringstream iss(input);
    
    while (iss >> word) {
        if (word.size() >= 5) {
            word = string(word.rbegin(), word.rend());
        }
        result += word + " ";
    }
    
    result.pop_back(); // remove extra space at the end
    cout << result << endl;
    
    return 0;
}