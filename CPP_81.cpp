```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades) {
    vector<string> result;
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

int main() {
    vector<float> grades = {4.2, 3.8, 3.5, 1.9};
    vector<string> expectedOutput = {"A+", "A", "A-", "D+"};

    if (issame(numerical_letter_grade(grades), expectedOutput)) {
        std::cout << "The output is as expected." << std::endl;
    } else {
        std::cout << "The output does not match the expected result." << std::endl;
    }

    return 0;
}