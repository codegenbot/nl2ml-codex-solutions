```c++
#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            result += " ";
        } else {
            string word;
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            for (char c : word) {
                result += to_string(c);
            }
        }
    }
    return result;
}

int main() {
    std::string input = "Hi. My name is Mister Robot. How are you?";
    std::string output = anti_shuffle(input);
    assert(output == ".Hi My aemn is Meirst .Rboot How aer ?ouy");
    return 0;
}