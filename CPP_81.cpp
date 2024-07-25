#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<string> numerical_letter_grade(const vector<float>& grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        if (grade >= 4.0) {
            letter_grades.push_back("A");
        } else if (grade >= 3.7) {
            letter_grades.push_back("A-");
        } else if (grade >= 3.3) {
            letter_grades.push_back("B+");
        } else if (grade >= 3.0) {
            letter_grades.push_back("B");
        } else if (grade >= 2.7) {
            letter_grades.push_back("B-");
        } else if (grade >= 2.3) {
            letter_grades.push_back("C+");
        } else if (grade >= 2.0) {
            letter_grades.push_back("C");
        } else if (grade >= 1.7) {
            letter_grades.push_back("C-");
        } else if (grade >= 1.3) {
            letter_grades.push_back("D+");
        } else if (grade >= 1.0) {
            letter_grades.push_back("D");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}