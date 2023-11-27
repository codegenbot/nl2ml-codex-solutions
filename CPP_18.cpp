#include <iostream>
#include <string>

using namespace std;

int how_many_times(string str, string substring) {
    int count = 0;
    int subLen = substring.length();
    int strLen = str.length();

    if (subLen == 0) {
        return 0;
    }

    for (int i = 0; i <= strLen - subLen; i++) {
        bool found = true;
        for (int j = 0; j < subLen; j++) {
            if (str[i + j] != substring[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            count++;
        }
    }

    return count;
}

// int main() {
//     string str = "abababab";
//     string substring = "ab";

//     int result = how_many_times(str, substring);
//     cout << result << endl;

//     return 0;
// }