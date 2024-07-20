#include <any>
#include <string>
#include <cassert>

template<typename T>
auto compare_one(const T& a, const T& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (std::any_cast<int>(a) > std::any_cast<int>(b)) {
            return &a;
        } else if (std::any_cast<int>(a) < std::any_cast<int>(b)) {
            return &b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (std::any_cast<float>(a) > std::any_cast<float>(b)) {
            return &a;
        } else if (std::any_cast<float>(a) < std::any_cast<float>(b)) {
            return &b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (std::stof(std::any_cast<std::string>(a)) > std::stof(std::any_cast<std::string>(b))) {
            return &a;
        } else if (std::stof(std::any_cast<std::string>(a)) < std::stof(std::any_cast<std::string>(b))) {
            return &b;
        }
    }
    return nullptr;
}

int main() {
    assert (std::any_cast<std::string>(*compare_one(std::string("1"), std::string("1")) == "None");
    return 0;
}