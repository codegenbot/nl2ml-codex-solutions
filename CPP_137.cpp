#include <iostream>
#include <any>
#include <cassert>
#include <string>

std::any compare_one(const std::any& a, const std::any& b) {
    assert(a.type() == b.type());

    if(a.type() == typeid(int)) {
        if(std::any_cast<int>(a) > std::any_cast<int>(b))
            return a;
        else if(std::any_cast<int>(a) < std::any_cast<int>(b))
            return b;
        else
            return 0;
    }
    else if(a.type() == typeid(float)) {
        if(std::any_cast<float>(a) > std::any_cast<float>(b))
            return a;
        else if(std::any_cast<float>(a) < std::any_cast<float>(b))
            return b;
        else
            return 0.0f;
    }
    else if(a.type() == typeid(std::string)) {
        if(std::any_cast<std::string>(a) > std::any_cast<std::string>(b))
            return a;
        else if(std::any_cast<std::string>(a) < std::any_cast<std::string>(b))
            return b;
        else
            return std::string("");
    }

    return std::any();
}

int main() {
    assert (std::any_cast<std::string>(compare_one(std::any(std::string("1")), std::any(std::string("1"))) == "");
    assert (std::any_cast<int>(compare_one(std::any(1), std::any(2))) == 2);
    assert (std::any_cast<float>(compare_one(std::any(3.5f), std::any(2.5f))) == 3.5f);

    return 0;
}