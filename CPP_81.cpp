```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    std::vector<std::string> result;
    for (float grade : grades) {
        std::string letterGrade;
        if (grade >= 4.0)
            letterGrade = "A+";
        else if (grade > 3.7)
            letterGrade = "A";
        else if (grade > 3.3)
            letterGrade = "A-";
        else if (grade > 3.0)
            letterGrade = "B+";
        else if (grade > 2.7)
            letterGrade = "B";
        else if (grade > 2.3)
            letterGrade = "B-";
        else if (grade > 2.0)
            letterGrade = "C+";
        else if (grade > 1.7)
            letterGrade = "C";
        else if (grade > 1.3)
            letterGrade = "C-";
        else if (grade > 1.0)
            letterGrade = "D+";
        else if (grade > 0.7)
            letterGrade = "D";
        else
            letterGrade = "F";
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    std::vector<float> grades;
    // Get grades from user
    int n;
    std::cout << "Enter the number of grades: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        float grade;
        std::cout << "Enter grade " << i + 1 << ": ";
        std::cin >> grade;
        grades.push_back(grade);
    }
    
    std::vector<std::string> letter_grades = numerical_letter_grade(grades);

    // Check the correctness of conversion
    std::vector<std::string> expected = {"A+", "B", "C-"};
    if (!issame(letter_grades, expected)) {
        std::cout << "Conversion failed!" << std::endl;
    } else {
        std::cout << "Conversion successful!" << std::endl;
    }

    return 0;
}