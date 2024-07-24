#include <vector>
#include <string>

bool issame(const vector<string>& expected, const vector<string>& actual) {
    if (expected.size() != actual.size()) {
        return false;
    }
    for (int i = 0; i < expected.size(); i++) {
        if (expected[i] != actual[i]) {
            return false;
        }
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> letter_grades;
    for (float grade : grades) {
        if (grade >= 4.0) {
            letter_grades.push_back("A+");
        } else if (grade > 3.7) {
            letter_grades.push_back("A");
        } else if (grade > 3.3) {
            letter_grades.push_back("A-");
        } else if (grade > 3.0) {
            letter_grades.push_back("B+");
        } else if (grade > 2.7) {
            letter_grades.push_back("B");
        } else if (grade > 2.3) {
            letter_grades.push_back("B-");
        } else if (grade > 2.0) {
            letter_grades.push_back("C+");
        } else if (grade > 1.7) {
            letter_grades.push_back("C");
        } else if (grade > 1.3) {
            letter_grades.push_back("C-");
        } else if (grade > 1.0) {
            letter_grades.push_back("D+");
        } else if (grade > 0.7) {
            letter_grades.push_back("D");
        } else if (grade > 0.0) {
            letter_grades.push_back("D-");
        } else {
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}

int main() {
    vector<float> input = {0, 0.7};
    vector<string> expectedOutput = {"E", "D-"};

    if (!issame(expectedOutput, numerical_letter_grade(input))) {
        std::cout << "Error: Expected output is not matching with the actual one." << std::endl;
        return 1;
    }

    return 0;
}