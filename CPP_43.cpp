#include <iostream>
#include <vector>

using namespace std;

bool pairs_sum_to_zero(vector<int> l){
    for(int i=0; i<l.size()-1; i++){
        for(int j=i+1; j<l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    cout << pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) << endl;
    return 0;
}