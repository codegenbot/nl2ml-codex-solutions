#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(const string& str) {
    if(str.empty()) return false;
    char c = str.back(); 
    return isalpha(c);  
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true);
    return 0;
}