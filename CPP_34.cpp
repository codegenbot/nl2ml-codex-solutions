#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    return result;
}

vector<int>::iterator unique(vector<int>::iterator start, vector<int>::iterator end) {
    sort(start, end);
    auto it = start;
    while (it != end) {
        auto nextIt = it + 1;
        while (nextIt != end && *it == *nextIt) {
            ++nextIt;
        }
        it = nextIt;
    }
    return it;
}