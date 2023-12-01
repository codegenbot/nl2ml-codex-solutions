#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int num : x){
        int temp = num;
        bool hasEvenDigit = false;
        while(temp > 0){
            int digit = temp % 10;
            if(digit % 2 == 0){
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if(!hasEvenDigit){
            result.push_back(num);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    // Add more test cases here
    return 0;
}