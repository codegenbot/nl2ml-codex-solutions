#include <string>
#include <vector>
#include <cassert>

std::string concatenate(std::vector<std::string> strings){
    std::string result = "";
    for (std::string str : strings) {
        result += str;
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}