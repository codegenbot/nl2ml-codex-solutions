#include <iostream>
#include <vector>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            oddCount++;
        }
    }
    return (oddCount == 0) ? "YES" : "NO";
}

int main() {
    // Test cases
    assert(exchange({100, 200}, {200, 200}) == "YES");
    assert(exchange({1, 2, 3}, {1, 2, 3}) == "NO");
    assert(exchange({2, 4, 6}, {4, 2, 6}) == "YES");
    assert(exchange({}, {}) == "YES");
    assert(exchange({1}, {2}) == "NO");

    return 0;
}