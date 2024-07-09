#include <vector>
#include <iostream>
#include <initializer_list>

bool namespace_vector::issame(vector<int>& a, vector<int>& b) {
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<int> even_odd_count(int num) {
    vector<int> result = {0, 0};
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}

int main() {
    assert(issame(even_odd_count(0), {0, 1}));
    return 0;
}