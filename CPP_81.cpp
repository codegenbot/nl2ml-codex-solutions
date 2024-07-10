#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (const auto& str : b) {
            if (std::string(a[i]) == str) { 
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

std::string numerical_letter_grade(int credits, double gpa) {
    if (gpa >= 3.7) return "A";
    else if (gpa >= 3.4) return "B+";
    else if (gpa >= 3.1) return "B";
    else if (gpa >= 2.8) return "C+";
    else if (gpa >= 2.5) return "C";
    else if (gpa >= 2.2) return "D+";
    else return "F";
}

int main() {
    int credits = 3;
    double gpa = 3.4;

    if (numerical_letter_grade(credits, gpa) == "F" || numerical_letter_grade(credits, gpa) == "D+") {
        throw std::runtime_error("Invalid GPA");
    }
    
    return 0;
}