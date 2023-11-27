#include <any>
#include <string>

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = std::any_cast<int>(a);
        int num2 = std::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = std::any_cast<float>(a);
        float num2 = std::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = std::any_cast<std::string>(a);
        std::string str2 = std::any_cast<std::string>(b);
        if (str1 > str2) {
            return str1;
        } else if (str1 < str2) {
            return str2;
        }
    }
    return std::any("None");
}