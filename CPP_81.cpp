```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> numerical_letter_grade(vector<float> grades){
    vector<string> letter_grades;
    for(float g:grades){
        if(g>=4.0)letter_grades.push_back("A+");
        else if(g>3.7)letter_grades.push_back("A");
        else if(g>3.3)letter_grades.push_back("A-");
        else if(g>3.0)letter_grades.push_back("B+");
        else if(g>2.7)letter_grades.push_back("B");
        else if(g>2.3)letter_grades.push_back("B-");
        else if(g>2.0)letter_grades.push_back("C+");
        else if(g>1.7)letter_grades.push_back("C");
        else if(g>1.3)letter_grades.push_back("C-");
        else if(g>1.0)letter_grades.push_back("D+");
        else if(g>0.7)letter_grades.push_back("D");
        else letter_grades.push_back("E");
    }
    return letter_grades;
}

int main() {
    vector<float> grades = {0, 0.7};
    assert(issame(numerical_letter_grade(grades), {"E", "D-"}));
    if (grades.size() == 0) {
        cout << "No grades found." << endl;
    } else {
        for (float g : grades) {
            if (g >= 4.0) {
                cout << "A+" << endl;
            }
            else if(g > 3.7) {
                cout << "A" << endl;
            }
            else if(g > 3.3) {
                cout << "A-" << endl;
            }
            else if(g > 3.0) {
                cout << "B+" << endl;
            }
            else if(g > 2.7) {
                cout << "B" << endl;
            }
            else if(g > 2.3) {
                cout << "B-" << endl;
            }
            else if(g > 2.0) {
                cout << "C+" << endl;
            }
            else if(g > 1.7) {
                cout << "C" << endl;
            }
            else if(g > 1.3) {
                cout << "C-" << endl;
            }
            else if(g > 1.0) {
                cout << "D+" << endl;
            }
            else if(g > 0.7) {
                cout << "D" << endl;
            }
            else {
                cout << "E" << endl;
            }
        }
    }
    return 0;
}