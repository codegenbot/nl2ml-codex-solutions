#include <vector>
#include <algorithm>
#include <cassert>
#include <cmath>

float find_max_element(const std::vector<float>& l){
    auto max_it = std::max_element(l.begin(), l.end());
    float max = *max_it;
    return max;
}

int main(){
    assert (abs(*std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.begin(), {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}.end()) - 124)<1e-4);
    return 0;
}