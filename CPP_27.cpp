#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string flip_case(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    cout << flip_case("These violent delights have violent ends") << endl;
    return 0;
}