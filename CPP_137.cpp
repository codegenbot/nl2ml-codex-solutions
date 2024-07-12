#include <iostream>
#include <any>
#include <string>
#include <cassert>

std::any compare_one(std::any a, std::any b) {
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(std::any_cast<int>(a) > std::any_cast<int>(b))
            return a;
        else if(std::any_cast<int>(a) < std::any_cast<int>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(std::any_cast<float>(a) > std::any_cast<float>(b))
            return a;
        else if(std::any_cast<float>(a) < std::any_cast<float>(b))
            return b;
        else
            return "None";
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        float a_float = std::stof(std::any_cast<std::string>(a));
        float b_float = std::stof(std::any_cast<std::string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return "None";
    }
    else if((a.type() == typeid(int) && b.type() == typeid(std::string)) || (a.type() == typeid(std::string) && b.type() == typeid(int))){
        float a_float = std::stof(a.type() == typeid(int) ? std::to_string(std::any_cast<int>(a)) : std::any_cast<std::string>(a));
        float b_float = std::stof(b.type() == typeid(int) ? std::to_string(std::any_cast<int>(b)) : std::any_cast<std::string>(b));
        if(a_float > b_float)
            return a;
        else if(a_float < b_float)
            return b;
        else
            return "None";
    }
    return "None";
}

int main() {
    assert(std::any_cast<std::string>(compare_one(std::string("1"), 1)) == "None");
    return 0;
}