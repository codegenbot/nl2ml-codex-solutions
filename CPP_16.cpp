#include <iostream>
#include <vector>
#include <algorithm>

int count_distinct_characters(const std::string& str) {
    std::vector<char> distinct_chars;
    for(char c : str) {
        char lower_c = std::tolower(c);
        if(std::find(distinct_chars.begin(), distinct_chars.end(), lower_c) == distinct_chars.end()) {
            distinct_chars.push_back(lower_c);
        }
    }
    return distinct_chars.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}