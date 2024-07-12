```cpp
#include <boost/any.hpp>
#include <string>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return boost::any("None");
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (std::stof(x) > std::stof(y))
            return a;
        else if (std::stof(y) > std::stof(x))
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}