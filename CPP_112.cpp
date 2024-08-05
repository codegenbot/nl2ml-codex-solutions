#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert> // Include the header for assert function

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, (result == reverse_result) ? "True" : "False"};
}

int main(){
    assert(issame(reverse_delete("mamma", "mia"), std::vector<std::string>{"", "True"})); // Include <vector> in the assert statement
}