#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(prefix) == 0){
            result.push_back(str);
        }
    }
    return result;
}

int main(){
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAA", "xxx"}, "xxx"), {"xxx", "xxxAA", "xxx"}));

    std::cout << "All test cases passed!" << std::endl;

    return 0;
}