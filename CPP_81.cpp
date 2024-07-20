#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> result;
    for(float grade : grades){
        string letterGrade;
        if(grade >= 4.0) letterGrade = "A+";
        else if(grade > 3.7) letterGrade = "A";
        else if(grade > 3.3) letterGrade = "A-";
        else if(grade > 3.0) letterGrade = "B+";
        else if(grade > 2.7) letterGrade = "B";
        else if(grade > 2.3) letterGrade = "B-";
        else if(grade > 2.0) letterGrade = "C+";
        else if(grade > 1.7) letterGrade = "C";
        else if(grade > 1.3) letterGrade = "C-";
        else if(grade > 1.0) letterGrade = "D+";
        else if(grade > 0.7) letterGrade = "D";
        else letterGrade = "F";
        result.push_back(letterGrade);
    }
    return result;
}

int main() {
    vector<float> grades = {0, 0.7};
    vector<string> result = numerical_letter_grade(grades);
    
    assert(result.size() == 2 && result[0] == "E" && result[1] == "D-");
    
    return 0;
}