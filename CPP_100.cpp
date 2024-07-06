#include <vector>

bool isSame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size())
        return false;
    for(int i=0; i<a.size();i++)
        if(a[i]!=b[i])
            return false;
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile(n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pile[i] = i * 2 + 1;
        } else {
            pile[i] = i * 2;
        }
    }
    return pile;
}