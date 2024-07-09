#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){ 
    if (a.size() != b.size()) { 
        return false; 
    } 
    for (size_t i = 0; i < a.size(); i++) { 
        if (a[i] != b[i]) { 
            return false; 
        } 
    } 
    return true; 
}

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter){ 
    std::vector<int> result; 
    for (size_t i = 0; i < numbers.size(); i++) { 
        result.push_back(numbers[i]); 
        if (i != numbers.size() - 1) { 
            result.push_back(delimiter); 
        } 
    } 
    return result; 
}

int main(){ 
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2})); 
    return 0; 
}