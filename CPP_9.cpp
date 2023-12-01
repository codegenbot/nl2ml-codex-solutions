#include <iostream>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = numbers[0];
    result.push_back(maxNum);
    for(int i=1; i<numbers.size(); i++){
        maxNum = max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    return result;
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
    vector<int> input = {3, 2, 3, 100, 3};
    vector<int> expected_output = {3, 3, 3, 100, 100};
    vector<int> result = rolling_max(input);

    if(issame(result, expected_output)){
        cout << "Output is correct!" << endl;
    }
    else{
        cout << "Output is incorrect!" << endl;
    }

    return 0;
}