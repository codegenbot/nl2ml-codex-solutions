#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    vector<int> result;
    for (int i : s1)
        if (s2.count(i)) 
            result.push_back(i);

    return result;
}