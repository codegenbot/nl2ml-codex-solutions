```cpp
#include <cassert>
#include <string>

std::string flip_case(const std::string& input) {
    std::string output = "";
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    return output;
}

int testMain() {
    assert(flip_case("These violent delights have violent ends") == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}