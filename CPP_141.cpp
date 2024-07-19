#include <string>
#include <cassert>

string file_name_check(string file_name) {
    int dotPos = file_name.find(".");
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.size() - 1) {
        return "No";
    }

    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if (beforeDot.empty() || !isalpha(beforeDot[0])) {
        return "No";
    }

    int digitCount = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        }
    }

    if (digitCount > 3) {
        return "No";
    }

    if (afterDot != "txt" && afterDot != "exe" && afterDot != "dll") {
        return "No";
    }

    return "Yes";
}