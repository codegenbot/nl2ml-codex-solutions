#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    return lst;
}

int main(){
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}