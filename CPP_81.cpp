#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<string>& v1, const vector<string>& v2) {
    return v1 == v2;
}

vector<string> numerical_letter_grade(vector<float> grades);

int main() {
    vector<float> grades = {3.5, 2.0, 4.0, 1.8, 3.3};
    vector<string> result = numerical_letter_grade(grades);
    for (const string& grade : result) {
        cout << grade << endl;
    }
    return 0;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float gpa : grades) {
        if (gpa == 4.0) letter_grades.push_back("A+");
        else if (gpa > 3.7) letter_grades.push_back("A");
        else if (gpa > 3.3) letter_grades.push_back("A-");
        else if (gpa > 3.0) letter_grades.push_back("B+");
        else if (gpa > 2.7) letter_grades.push_back("B");
        else if (gpa > 2.3) letter_grades.push_back("B-");
        else if (gpa > 2.0) letter_grades.push_back("C+");
        else if (gpa > 1.7) letter_grades.push_back("C");
        else if (gpa > 1.3) letter_grades.push_back("C-");
        else if (gpa > 1.0) letter_grades.push_back("D+");
        else if (gpa > 0.7) letter_grades.push_back("D");
        else if (gpa > 0.0) letter_grades.push_back("D-");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}