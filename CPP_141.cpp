#include <iostream>
#include <string>
using namespace std;

int countDigits(string s);
string file_name_check(string file_name);

int countDigits(string s) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name){
    int dotPos = file_name.find('.');
    if (dotPos == string::npos || dotPos == 0 || dotPos == file_name.size()-1) {
        return "No";
    }

    string nameBeforeDot = file_name.substr(0, dotPos);
    string extension = file_name.substr(dotPos + 1);

    if (countDigits(nameBeforeDot) > 3) {
        return "No";
    }

    if (!isalpha(nameBeforeDot[0])) {
        return "No";
    }

    if (extension != "txt" && extension != "exe" && extension != "dll") {
        return "No";
    }

    return "Yes";
}

int main() { 
    assert (file_name_check("s.") == "No");
    return 0;
}