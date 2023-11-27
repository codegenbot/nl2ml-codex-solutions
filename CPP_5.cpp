#include <vector>

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i != numbers.size() - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function
}

int main(){
    assert (issame(intersperse({2, 2, 2}, 2),{2, 2, 2, 2, 2}));
    return 0;
}