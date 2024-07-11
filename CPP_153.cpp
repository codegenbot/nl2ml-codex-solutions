#include <iostream>
#include <vector>
#include <string>
#include <climits>

using namespace std;

string Strongest_Extension(string class_name, vector<string> extensions);

string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = INT_MIN;
    string strongest_extension = "";
    
    for (string ext : extensions) {
        int CAP = 0, SM = 0;
        for (char c : ext) {
            if (isupper(c)) {
                CAP++;
            } else if (islower(c)) {
                SM++;
            }
        }
        int strength = CAP - SM;
        if (strength > max_strength || (strength == max_strength && ext < strongest_extension)) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}

int main() {
    // Your main function code here
    return 0;
}