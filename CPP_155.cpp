#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> even_odd_count(int num){
    vector<int> counts(2, 0);
    string numStr = to_string(abs(num));
    for(char c : numStr){
        if((c - '0') % 2 == 0){
            counts[0]++;
        } else {
            counts[1]++;
        }
    }
    return counts;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert (issame(even_odd_count(0) , {1, 0}));
}