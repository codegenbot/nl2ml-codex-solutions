#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

vector<int> intersperse(const vector<int>& numbers, int delimeter){
    vector<int> result;
    if(numbers.empty()){
        return result;
    }
    result.push_back(numbers[0]);
    for(int i = 1; i < numbers.size(); ++i){
        result.push_back(delimeter);
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    
    return 0;
}