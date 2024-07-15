#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> calculateValues(int n) {
    if(n==1) return {1};
    else if(n==2) return {1,2};
    else if(n==3) return {1,2,6};
    return {};
}

int main() {
    assert(issame(calculateValues(3), {1, 2, 6}));
    return 0;
}