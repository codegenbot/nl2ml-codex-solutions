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

bool issame(vector<int> a, vector<int> b) {
    // Implement the issame function here
    // Compare the contents of vectors a and b and return true if they are the same, otherwise return false
    // You can use the == operator to compare vectors
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}