#include <vector>
#include <cassert>

bool is_same(vector<int> a, vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
      
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i < numbers.size() - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}

int main(){
    assert(is_same(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    
    return 0;
}