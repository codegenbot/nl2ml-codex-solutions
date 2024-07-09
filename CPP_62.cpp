#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    assert(issame(derivative({1}), std::vector<float>{}));
}