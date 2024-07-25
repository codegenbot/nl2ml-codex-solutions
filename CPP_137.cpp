#include <any>
#include <string>
#include <vector>

int compare(std::any& a, std::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = std::any_cast<int>(a);
        int y = std::any_cast<int>(b);
        if (x > y) return 1;
        else if (x < y) return -1;
        else return 0;
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = std::any_cast<double>(a);
        double y = std::any_cast<double>(b);
        if (x > y) return 1;
        else if (x < y) return -1;
        else return 0;
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring)))) {
        std::string x = std::any_cast<std::string>(a);
        std::string y = std::any_cast<std::string>(b);
        if (x > y) return 1;
        else if (x < y) return -1;
        else return 0;
    } else if ((a.type() == typeid(std::string) || a.type() == typeid(wstring)) &&
               (b.type() == typeid(double)))) {
        std::string x = std::any_cast<std::string>(a);
        double y = std::any_cast<double>(b);
        if (std::stod(x) > y) return 1;
        else if (std::stod(x) < y) return -1;
        else return 0;
    } else if ((a.type() == typeid(double)) &&
               (b.type() == typeid(std::string) || b.type() == typeid(wstring)))) {
        double x = std::any_cast<double>(a);
        std::string y = std::any_cast<std::string>(b);
        if (x > std::stod(y)) return 1;
        else if (x < std::stod(y)) return -1;
        else return 0;
    } else {
        return 0; // changed from "None"
    }
}