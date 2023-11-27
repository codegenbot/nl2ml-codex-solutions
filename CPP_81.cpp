#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> numerical_letter_grade(vector<float> grades);

bool issame(vector<string> a, vector<string> b);

int main() {
    vector<float> grades = {3.8, 2.9, 4.0, 2.5};
    vector<string> letter_grades = numerical_letter_grade(grades);

    for(int i=0; i<letter_grades.size(); i++){
        cout << letter_grades[i] << endl;
    }

    return 0;
}

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(int i=0; i<grades.size(); i++){
        if(grades[i] == 4.0){
            letter_grades.push_back("A+");
        }
        else if(grades[i] > 3.7){
            letter_grades.push_back("A");
        }
        else if(grades[i] > 3.3){
            letter_grades.push_back("A-");
        }
        else if(grades[i] > 3.0){
            letter_grades.push_back("B+");
        }
        else if(grades[i] > 2.7){
            letter_grades.push_back("B");
        }
        else if(grades[i] > 2.3){
            letter_grades.push_back("B-");
        }
        else if(grades[i] > 2.0){
            letter_grades.push_back("C+");
        }
        else if(grades[i] > 1.7){
            letter_grades.push_back("C");
        }
        else if(grades[i] > 1.3){
            letter_grades.push_back("C-");
        }
        else if(grades[i] > 1.0){
            letter_grades.push_back("D+");
        }
        else if(grades[i] > 0.7){
            letter_grades.push_back("D");
        }
        else if(grades[i] > 0.0){
            letter_grades.push_back("D-");
        }
        else{
            letter_grades.push_back("E");
        }
    }
    return letter_grades;
}