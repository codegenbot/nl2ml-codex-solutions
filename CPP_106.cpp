\#include <vector>

std::vector<int> f(int n){
    std::vector<int> result;
    int factorial = 1;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
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

bool issame(std::vector<int> a, std::vector<int> b){
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

int main(){
    asserts(issame(f(3) , {1, 2, 6}));
    return 0;
}