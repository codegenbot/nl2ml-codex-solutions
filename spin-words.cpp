#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string word;
    string result;
    istringstream iss(input);
    
    while (iss >> word) {
        if (word.size() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    
    std::cout << result << std::endl;
    
    return 0;
}