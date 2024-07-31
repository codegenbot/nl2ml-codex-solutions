#include <vector>
#include <cassert>

using namespace std;

vector<int> f(int n){
    vector<int> result;
    int sum = 0;
    int factorial = 1;
    
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            factorial *= i;
            result.push_back(factorial);
        } else {
            sum += i;
            result.push_back(sum);
        }
    }
    
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}