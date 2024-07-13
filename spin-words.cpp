```cpp
#include <string>
using namespace std;

string spinWords(string str) {
    string result = ""; 
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLength = i - result.length() - 1;
            if (wordLength >= 5) {
                string reversedWord = "";
                for (int j = wordLength - 1; j >= 0; j--)
                    reversedWord += str[i-1-j];
                result.append(reversedWord).append(" ");
            } else
                result.append(str.substr(result.length(), wordLength + 1)).append(" ");
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
}