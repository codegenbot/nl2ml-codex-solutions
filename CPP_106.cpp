#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert (issame(f(3), {1, 2, 6}));
    return 0;
}

int main1(){
    assert (issame(f(3), {1, 2, 6}));
    return 0;
}