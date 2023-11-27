#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

int count_distinct_characters(std::string str) {
    std::vector<char> distinctChars;
    for (char c : str) {
        char lowerC = tolower(c);
        if (std::find(distinctChars.begin(), distinctChars.end(), lowerC) == distinctChars.end()) {
            distinctChars.push_back(lowerC);
        }
    }
    return distinctChars.size();
}

int main() {
    assert(count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    return 0;
}