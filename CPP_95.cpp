#include <string>
#include <map>

using namespace std;

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto& pair : dict) {
        if (!isupper(pair.first[0]) && !islower(pair.first[0])) {
            allUpper = false;
            allLower = false;
            break;
        } else if ((isupper(pair.first[0]) && !allUpper) || (islower(pair.first[0]) && !allLower)) {
            allUpper = false;
            allLower = false;
        }
    }

    return allUpper || allLower;
}

int main() {
    map<string, string> dict;
    // add your code here
    return 0;
}