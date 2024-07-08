#include <vector>
#include <algorithm>

bool below_zero(std::vector<int> operations){
    int balance = 0;
    for(int operation : operations){
        balance += operation;
        if(balance < 0) return true;
    }
    return false;
}