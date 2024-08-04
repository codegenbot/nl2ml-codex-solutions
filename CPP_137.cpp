#include <any>
#include <string>
#include <cassert>

std::any compare_one(const std::any& a, const std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return a;
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return a;
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))) {
            return a;
        } else if (std::stof(std::any_cast<std::string>(a)) < std::stof(std::any_cast<std::string>(b))) {
            return b;
        }
    }
    return std::any();
}

int main() {
    assert(compare_one(1, 1).type() == typeid(int) && std::any_cast<int>(compare_one(1, 1)) == 1);
    return 0;
}