#include <iostream>
#include <vector>
#include <cassert>

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string s : lst) {
        int oddCount = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                oddCount++;
            }
        }
        string newStr = "the number of odd elements " + to_string(oddCount) + " in the string " + s + " of the input.";
        result.push_back(newStr);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(odd_count({"271", "137", "314"}), {"the number of odd elements 2 in the string 271 of the input.",
                                                     "the number of odd elements 2 in the string 137 of the input.",
                                                     "the number of odd elements 2 in the string 314 of the input."}));
}