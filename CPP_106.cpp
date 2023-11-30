#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<int> f(int n){
    vector<int> result;
    int sum = 0;
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            factorial *= i;
            result.push_back(factorial);
        }
        else{
            sum += i;
            result.push_back(sum);
        }
    }
    return result;
}

int main() {
    assert(f(3) == vector<int>({1, 2, 6}));

    return 0;
}