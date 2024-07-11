#include <vector>
#include <algorithm>

using namespace std;

int main() {
    assert (compare({1,2,3,5},{-1,2,3,4}) == make_pair(1,0));
    return 0;
}

pair<int, int> compare(vector<int> a, vector<int> b) {
    vector<int> c = a;
    vector<int> d = b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    if (c.size() < d.size())
        return make_pair(1, 0);
    else if (c.size() > d.size())
        return make_pair(0, 1);
    else
        return make_pair(1, 1);
}