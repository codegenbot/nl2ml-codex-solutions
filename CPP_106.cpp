#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> f(int n){
    vector<int> result;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            int factorial = 1;
            for(int j=1; j<=i; j++){
                factorial *= j;
            }
            result.push_back(factorial);
        }
        else{
            int sum = 0;
            for(int j=1; j<=i; j++){
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> result = f(3);
    assert(issame(result, {1,2,6}));

    return 0;
}