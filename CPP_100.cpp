#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
        
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back(i * 2);
    }
    return pile;
}