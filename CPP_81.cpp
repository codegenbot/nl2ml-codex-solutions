
```
#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (int i = 0; i < grades.size(); ++i) {
        if (grades[i] >= 4.0) {
            letter_grades.push_back("A+");
        } else if (grades[i] >= 3.7 && grades[i] < 4.0) {
            letter_grades.push_back("A");
        } else if (grades[i] >= 3.3 && grades[i] < 3.7) {
            letter_grades.push_back("A-");
        } else if (grades[i] >= 3.0 && grades[i] < 3.3) {
            letter_grades.push_back("B+");
        } else if (grades[i] >= 2.7 && grades[i] < 3.0) {
            letter_grades.push_back("B");
        } else if (grades[i] >= 2.3 && grades[i] < 2.7) {
            letter_grades.push_back("B-");
        } else if (grades[i] >= 2.0 && grades[i] < 2.3) {
            letter_grades.push_back("C+");
        } else if (grades[i] >= 1.7 && grades[i] < 2.0) {
            letter_grades.push_back("C");
        } else if (grades[i] >= 1.3 && grades[i] < 1.7) {
            letter_grades.push_back("C-");
        } else if (grades[i] >= 1.0 && grades[i] < 1.3) {
            letter_grades.push_back("D+");
        } else if (grades[i] >= 0.7 && grades[i] < 1.0) {
            letter_grades.push_back("D");
        } else if (grades[i] >= 0.0 && grades[i] < 0.7) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

int main() {
    assert(issame(numerical_letter_grade({0, 0.7}), {"E", "D-"}));
    return 0;
}
```