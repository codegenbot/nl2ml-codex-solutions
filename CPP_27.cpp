#include <string>

using namespace std;

string flip_case(string str) {
    string result = "";
    for (char c : str) {
        if (islower(c))
            result += toupper(c);
        else
            result += tolower(c);
    }
    return result;
}