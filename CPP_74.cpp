#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    auto total_chars = [](const vector<string>& lst) {
        int sum = 0;
        for (const auto& str : lst) {
            sum += str.size();
        }
        return sum;
    };

    int sum1 = total_chars(lst1);
    int sum2 = total_chars(lst2);

    if (sum1 <= sum2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    // Test case
    assert((total_match({"this"}, {}) == vector<string>{}));
    assert((total_match({"a", "b", "c"}, {"alpha", "beta"}) == vector<string>{"a", "b", "c"}));
    assert((total_match({"hello", "world"}, {"foo", "bar", "baz"}) == vector<string>{"hello", "world"}));

    cout << "All test cases passed!";
    return 0;
}