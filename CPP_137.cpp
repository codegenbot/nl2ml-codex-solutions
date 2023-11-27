#include <boost/any.hpp>
#include <iostream>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB) {
            return intA;
        } else if (intB > intA) {
            return intB;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB) {
            return floatA;
        } else if (floatB > floatA) {
            return floatB;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string stringA = boost::any_cast<std::string>(a);
        std::string stringB = boost::any_cast<std::string>(b);
        if (stringA > stringB) {
            return stringA;
        } else if (stringB > stringA) {
            return stringB;
        }
    }
    return "None";
}

int main() {
    std::cout << boost::any_cast<int>(compare_one(1, 2.5)) << std::endl;
    std::cout << boost::any_cast<std::string>(compare_one(1, "2,3")) << std::endl;
    std::cout << boost::any_cast<std::string>(compare_one("5,1", "6")) << std::endl;
    std::cout << boost::any_cast<std::string>(compare_one("1", 1)) << std::endl;
    return 0;
}