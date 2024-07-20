#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

int max_element(const vector<int>& l){
    int max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}

int main(){
    assert(abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    
    return 0;
}