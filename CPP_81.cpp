```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> letter_grades;
    for (float grade : grades) {
        std::string letter_grade;
        if (grade >= 4.0) {
            letter_grade = "A+";
        } else if (grade > 3.7) {
            letter_grade = "A";
        } else if (grade > 3.3) {
            letter_grade = "A-";
        } else if (grade > 3.0) {
            letter_grade = "B+";
        } else if (grade > 2.7) {
            letter_grade = "B";
        } else if (grade > 2.3) {
            letter_grade = "B-";
        } else if (grade > 2.0) {
            letter_grade = "C+";
        } else if (grade > 1.7) {
            letter_grade = "C";
        } else if (grade > 1.3) {
            letter_grade = "C-";
        } else if (grade > 1.0) {
            letter_grade = "D+";
        } else if (grade > 0.7) {
            letter_grade = "D";
        } else {
            letter_grade = "E";
        }
        letter_grades.push_back(letter_grade);
    }
    return letter_grades;
}

int main() {
    std::vector<float> grades = {3.5, 4.2, 2.8};
    std::vector<std::string> result = numerical_letter_grade(grades);

    for (auto grade : result) {
        std::cout << grade << " ";
    }
    std::cout << "\n";
    
    return 0;
}