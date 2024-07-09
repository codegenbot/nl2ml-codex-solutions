#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return remove_duplicates(a) == remove_duplicates(b);
}

int main(){
    assert(issame({1, 2, 3, 2, 4, 3, 5}, {1, 4, 5}));
    
    return 0;
}