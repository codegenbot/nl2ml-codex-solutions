#include <vector>
#include <cassert>
#include <cmath>

bool issame(float a, float b){
    return std::abs(a - b) < 0.0001;
}

std::vector<float> get_positive(std::vector<float> l);

int main(){
    std::vector<float> v = {1.5, -2.3, 4.0, -5.2};
    assert(issame(3.0, 3.0));
    assert(get_positive(v).size() == 2);
    return 0;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}