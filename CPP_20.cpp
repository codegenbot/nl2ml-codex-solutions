#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    if(a.size()!=b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(abs(a[i]-b[i]) > 1e-5){
            return false;
        }
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers){
    float min_diff = INFINITY;
    float num1, num2;
    
    for(int i=0; i<numbers.size()-1; i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                num1 = numbers[i];
                num2 = numbers[j];
            }
        }
    }
    
    vector<float> result;
    result.push_back(num1);
    result.push_back(num2);
    
    return result;
}

int main(){
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
}