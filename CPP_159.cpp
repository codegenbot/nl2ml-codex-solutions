#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    std::vector<int> vec1{1, 2, 3};
    std::vector<int> vec2{1, 2, 3};
    
    bool result = issame(vec1, vec2);
    
    return 0;
}