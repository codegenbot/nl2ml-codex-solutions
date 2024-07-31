#include <cassert>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> l);

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));

    return 0;
}