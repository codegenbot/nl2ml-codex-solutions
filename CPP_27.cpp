#include <cassert>
#include <string>

void driver();

std::string flip_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower(c);
            else
                result += toupper(c);
        } else
            result += c;
    }
    return result;
}

int main(int argc, const char* argv[]) {
    std::string result = flip_case("These violent delights have violent ends");
    assert(result == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}