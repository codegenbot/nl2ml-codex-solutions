#include <vector>
#include <cassert>

bool issame(const vector<int> a, const vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst);

int main(){
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst){
    int max_neg = 0, min_pos = 0;
    for(int num : lst){
        if(num < 0 && num < max_neg){
            max_neg = num;
        }
        if(num > 0 && (num < min_pos || min_pos == 0)){
            min_pos = num;
        }
    }
    return {max_neg, min_pos};
}