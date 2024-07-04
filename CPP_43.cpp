#include<stdio.h>
#include<vector>
#include<unordered_set>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num)) return true;
        seen.insert(num);
    }
    return false;
}