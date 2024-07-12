```cpp
#include <boost/any.hpp>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return "None";
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return "None";
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        if (x > y)
            return a;
        else if (y > x)
            return b;
        else
            return "None";
    } else {
        double ax, ay, bx, by;
        try {
            ax = boost::any_cast<double>(a);
            ay = boost::any_cast<double>(b);
            if (ax > ay)
                return a;
            else if (ay > ax)
                return b;
            else
                return "None";
        } catch (...) {
            std::string x = boost::any_cast<std::string>(a);
            double y = boost::any_cast<double>(b);
            if (std::stod(x) > y)
                return a;
            else if (y > std::stod(x))
                return b;
            else
                return "None";
        }
    }
}