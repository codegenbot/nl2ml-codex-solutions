#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
string Strongest_Extension(string class_name, vector<string> extensions){
    int max_strength = INT_MIN;
    string strongest_extension = "";
    
    for (string ext : extensions) {
        int cap_count = 0, sm_count = 0;
        for (char c : ext) {
            if (isupper(c)) cap_count++;
            else if (islower(c)) sm_count++;
        }
        
        int strength = cap_count - sm_count;
        if (strength > max_strength || (strength == max_strength && strongest_extension == "")) {
            max_strength = strength;
            strongest_extension = ext;
        }
    }
    
    return class_name + "." + strongest_extension;
}