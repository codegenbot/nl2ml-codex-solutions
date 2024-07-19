```cpp
#include <cassert>
#include <map>
#include <string>
#include <cctype>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    assert((dict.empty()));
    if (dict.empty()) return false;

    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dict) {
        if (!std::islower(pair.first[0]) && !std::isupper(pair.first[0])) {
            allLower = false;
            allUpper = false;
            break;
        } else if ((allLower && std::isupper(pair.first[0])) || (allUpper && std::islower(pair.first[0]))) {
            allLower = false;
            allUpper = false;
            break;
        }
    }

    return allLower || allUpper;
}