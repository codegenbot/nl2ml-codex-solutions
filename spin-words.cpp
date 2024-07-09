#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word, output;
    istringstream iss(input);
    
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        output += word + " ";
    }
    
    output.pop_back(); // remove extra space at the end
    cout << output << endl;
    
    return 0;
}