#include <string>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(const string& str) {
    if(str.empty()) return false;
    return isalpha(str.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    return 0;
}