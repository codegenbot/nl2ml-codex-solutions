#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades);

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0) {
            letter_grades.push_back("A+");
        } else if (gpa > 3.7) {
            letter_grades.push_back("A");
        } else if (gpa > 3.3) {
            letter_grades.push_back("A-");
        } else if (gpa > 3.0) {
            letter_grades.push_back("B+");
        } else if (gpa > 2.7) {
            letter_grades.push_back("B");
        } else if (gpa > 2.3) {
            letter_grades.push_back("B-");
        } else if (gpa > 2.0) {
            letter_grades.push_back("C+");
        } else if (gpa > 1.7) {
            letter_grades.push_back("C");
        } else if (gpa > 1.3) {
            letter_grades.push_back("C-");
        } else if (gpa > 1.0) {
            letter_grades.push_back("D+");
        } else if (gpa > 0.7) {
            letter_grades.push_back("D");
        } else if (gpa > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

int main() {
    // Example usage
    std::vector<float> grades = {3.8, 2.9, 4.0, 1.5};
    std::vector<std::string> letter_grades = numerical_letter_grade(grades);
    for (const auto& grade : letter_grades) {
        std::cout << grade << " ";
    }
    return 0;
}