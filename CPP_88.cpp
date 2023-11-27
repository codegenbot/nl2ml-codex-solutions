#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> array){
    if(array.size() == 0){
        return array;
    }
    
    int sum = array[0] + array[array.size()-1];
    
    if(sum % 2 == 0){
        sort(array.begin(), array.end(), greater<int>());
    }else{
        sort(array.begin(), array.end());
    }
    
    return array;
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == vector<int>({23, 21, 14, 11}));
    
    return 0;
}