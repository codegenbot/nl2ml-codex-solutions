#include <vector>
#include <cassert>

std::vector<float> derivative(std::vector<float> xs);

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    assert (issame(derivative({1}), {}));
    return 0;
}