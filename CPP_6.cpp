#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main(){
    assert (issame(std::vector<int>{1, 2, 3}, std::vector<int>{1, 2, 3}));
    
    return 0;
}