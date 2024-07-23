#include <iostream>
#include <string>
#include <cctype>

std::string remove_vowels(std::string text){
    std::string result = "";
    for (char c : text) {
        if (!strchr("aeiouAEIOU", tolower(c))) {
            result += c;
        }
    }
    return result;

}

int main() {
    assert(remove_vowels("ybcd") == "ybcd");
    return 0;
}