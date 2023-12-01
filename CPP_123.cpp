#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> get_odd_collatz(int n){
    vector<int> collatz;
    collatz.push_back(n);
    
    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
        }
        else{
            n = (3 * n) + 1;
        }
        
        collatz.push_back(n);
    }
    
    vector<int> odd_collatz;
    for(int i : collatz){
        if(i % 2 != 0){
            odd_collatz.push_back(i);
        }
    }
    
    sort(odd_collatz.begin(), odd_collatz.end());
    
    return odd_collatz;
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

int main(){
    assert(issame(get_odd_collatz(1) , {1}));
    assert(issame(get_odd_collatz(3) , {3, 5, 7, 9}));
    assert(issame(get_odd_collatz(7) , {7, 11, 17, 13, 5, 15}));
    
    return 0;
}