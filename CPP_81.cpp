```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string>b) {
    // Your implementation here
}

std::vector<std::string> numerical_letter_grade(std::vector<float> grades) {
    vector<string> result;
    for (float grade : grades) {
        string letterGrade;
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
    assert(numerical_letter_grade({0, 0.7}) == {"E", "D"});
    return 0;
}