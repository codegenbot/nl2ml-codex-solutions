#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> incr_list(vector<int> l){
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}