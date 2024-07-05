#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto total_chars = [](const vector<string>& lst) {
        int total = 0;
        for (const string& s : lst) {
            total += s.size();
        }
        return total;
    };

    int total1 = total_chars(lst1);
    int total2 = total_chars(lst2);

    if (total1 < total2) {
        return lst1;
    } else {
        return lst2;
    }
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    assert(issame(total_match({"a", "bc"}, {"def"}), {"a", "bc"}));
    return 0;
}