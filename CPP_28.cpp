#include <vector>
#include <string>

std::string concatenate(vector<std::string> strings) {
    std::string result = "";
    for(std::string s : strings) {
        result += s;
    }
    return result;
}