```cpp
#include <vector>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        if (grade >= 4.0)
            result.push_back("A+");
        else if (grade > 3.7)
            result.push_back("A");
        else if (grade > 3.3)
            result.push_back("A-");
        else if (grade > 3.0)
            result.push_back("B+");
        else if (grade > 2.7)
            result.push_back("B");
        else if (grade > 2.3)
            result.push_back("B-");
        else if (grade > 2.0)
            result.push_back("C+");
        else if (grade > 1.7)
            result.push_back("C");
        else if (grade > 1.3)
            result.push_back("C-");
        else if (grade > 1.0)
            result.push_back("D+");
        else if (grade > 0.7)
            result.push_back("D");
        else
            result.push_back("E");
    }
    return result;
}

int main_test() {
    std::vector<float> grades = {0, 0.7};
    std::vector<std::string> a = numerical_letter_grade(grades);
    std::vector<std::string> b;
    for (const auto& grade : grades) {
        if (grade >= 4.0)
            b.push_back("A+");
        else if (grade > 3.7)
            b.push_back("A");
        else if (grade > 3.3)
            b.push_back("A-");
        else if (grade > 3.0)
            b.push_back("B+");
        else if (grade > 2.7)
            b.push_back("B");
        else if (grade > 2.3)
            b.push_back("B-");
        else if (grade > 2.0)
            b.push_back("C+");
        else if (grade > 1.7)
            b.push_back("C");
        else if (grade > 1.3)
            b.push_back("C-");
        else if (grade > 1.0)
            b.push_back("D+");
        else if (grade > 0.7)
            b.push_back("D");
        else
            b.push_back("E");
    }
    bool same = issame(a, b);
    return 0;
}