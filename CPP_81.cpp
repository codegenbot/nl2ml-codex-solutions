```cpp
#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> numerical_letter_grade(const std::vector<double>& grades) {
    std::vector<std::string> result;
    for (double grade : grades) {
        if (grade >= 0.9)
            result.push_back("A");
        else if (grade >= 0.8)
            result.push_back("B");
        else if (grade >= 0.7)
            result.push_back("C");
        else if (grade >= 0.6)
            result.push_back("D");
        else
            result.push_back("F");
    }
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main2() {
    std::vector<double> input = {0.0, 0.7};
    std::vector<std::string> result1 = numerical_letter_grade(input);
    
    std::vector<std::string> result2 = {"F", "C"};
    std::vector<std::string> b = result2;
    if (issame({result1[0], result1[1]}, b)) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }
}