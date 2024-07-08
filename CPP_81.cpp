#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades);

bool is_same(const std::vector<std::string>& a, const std::vector<std::string>& b);

std::vector<std::string> numerical_letter_grade(const std::vector<float>& grades) {
    std::vector<std::string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0f) {
            letter_grades.push_back("A+");
        } else if (gpa > 3.7f) {
            letter_grades.push_back("A");
        } else if (gpa > 3.3f) {
            letter_grades.push_back("A-");
        } else if (gpa > 3.0f) {
            letter_grades.push_back("B+");
        } else if (gpa > 2.7f) {
            letter_grades.push_back("B");
        } else if (gpa > 2.3f) {
            letter_grades.push_back("B-");
        } else if (gpa > 2.0f) {
            letter_grades.push_back("C+");
        } else if (gpa > 1.7f) {
            letter_grades.push_back("C");
        } else if (gpa > 1.3f) {
            letter_grades.push_back("C-");
        } else if (gpa > 1.0f) {
            letter_grades.push_back("D+");
        } else if (gpa > 0.7f) {
            letter_grades.push_back("D");
        } else if (gpa > 0.0f) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

int main() {
    assert(is_same(numerical_letter_grade({0.0f, 0.7f}), {"E", "D-"}));
}