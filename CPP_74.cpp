#include <vector>
#include <string>
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

int main() {
    assert((total_match({"this"}, {}) == vector<string>{}));
    assert((total_match({"a", "bc"}, {"def"}) == vector<string>{"a", "bc"}));
    return 0;
}