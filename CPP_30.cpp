#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l) {
        if(num > 0)
            result.push_back(num);
    }
    return result;
}