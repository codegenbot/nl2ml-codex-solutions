#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> unique(std::vector<int> l){
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> expected_output = {0, 2, 3, 5, 9, 123};
    
    std::vector<int> output = unique(input);
    
    if(issame(output, expected_output)){
        std::cout << "Output is correct" << std::endl;
    } else {
        std::cout << "Output is incorrect" << std::endl;
    }
    
    return 0;
}