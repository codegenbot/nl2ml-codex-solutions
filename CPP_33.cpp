#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;    
}

// You need to define or replace this function according to the task requirements
void sort_third(vector<int>& l){

}

vector<int> solve(vector<int> l) {
    vector<int> l_divisible_by_three;
    vector<int> l_not_divisible_by_three;
    vector<int> l_sorted_divisible_by_three;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        } else {
            l_not_divisible_by_three.push_back(l[i]);
        }
    }

    // You need to define or replace this function according to the task requirements
    sort_third(l_divisible_by_three);

    l_sorted_divisible_by_three = l_divisible_by_three;

    vector<int> result;
    int j = 0;
    int k = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            result.push_back(l_sorted_divisible_by_three[j]);
            ++j;
        } else {
            result.push_back(l_not_divisible_by_three[k]);
            ++k;
        }
    }

    return result;
}