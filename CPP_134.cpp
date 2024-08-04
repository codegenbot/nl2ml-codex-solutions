#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(const string& txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") != string::npos && txt.find_last_of(" ") > txt.find_last_of(lastChar)){
            return true;
        }
    }
    return false;
}