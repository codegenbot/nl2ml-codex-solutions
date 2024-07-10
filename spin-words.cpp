#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word, result;
    istringstream iss(input);
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    cout << result << endl;
    
    return 0;
}