#include <vector>
using namespace std;

bool below_zero(vector<int> operations){
    int balance = 0;
    for(int i=0; i<operations.size(); i++){
        balance += operations[i];
        if(balance < 0){
            return true;
        }
    }
    return false;
}

int main(){
    assert (below_zero(vector<int>{1, -2, 2, -2, 5, -5, 4, -4}) == true);
    return 0;
}