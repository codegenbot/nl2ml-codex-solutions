#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> intersperse(vector<int> numbers, int delimeter);

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    if(numbers.empty()){
        return result;
    }
    result.push_back(numbers[0]);
    for(int i = 1; i < numbers.size(); ++i){
        result.push_back(delimeter);
        result.push_back(numbers[i]);
    }
    return result;
}

int main(){
    // Your main function code here
    return 0;
}