#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result; 
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if (std::stoi(string(1, c)) % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) + " in the str" + std::to_string(i+1) + " of the input.");
    }
    return result;
}

int main() {
    vector<string> test = {"271", "137", "314"};
    vector<string> output = odd_count(test);
    assert(issame(output, {"the number of odd elements 2 in the str1 of the input.", 
                                 "the number of odd elements 1 in the str2 of the input.", 
                                 "the number of odd elements 0 in the str3 of the input."}));
    return 0;
}