#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result;
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}