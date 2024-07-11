#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    assert(issame(std::vector<float>({1}), std::vector<float>{}));
    return 0;
}