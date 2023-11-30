#include<vector>
#include<assert.h>

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()){
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
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
    assert(issame(f(3), {1, 2, 6}));

    // Additional test cases can be added here...

    return 0;
}