```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    vector<string> result;
    for (float g : grades) {
        if (g >= 4.0) {
            result.push_back("A+");
        } else if (g > 3.7) {
            result.push_back("A");
        } else if (g > 3.3) {
            result.push_back("A-");
        } else if (g > 3.0) {
            result.push_back("B+");
        } else if (g > 2.7) {
            result.push_back("B");
        } else if (g > 2.3) {
            result.push_back("B-");
        } else if (g > 2.0) {
            result.push_back("C+");
        } else if (g > 1.7) {
            result.push_back("C");
        } else if (g > 1.3) {
            result.push_back("C-");
        } else if (g > 1.0) {
            result.push_back("D+");
        } else if (g > 0.7) {
            result.push_back("D");
        } else if (g >= 0.0) {
            result.push_back("D-");
        } else {
            result.push_back("F");
        }
    }
    return result;
}