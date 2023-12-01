#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    else{
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
}

vector<int> sum_product(vector<int> numbers){
    int sum = 0;
    int product = 1;

    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
        product *= numbers[i];
    }

    return {sum, product};
}

int main(){
    // Your code for testing the functions...
}