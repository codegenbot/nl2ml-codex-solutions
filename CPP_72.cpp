#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    if (str != rev_str)
        return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5));
}