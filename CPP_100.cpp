```cpp
#include <vector>
#include <algorithm>

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
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

int main() {
    int n;
    cin >> n;
    vector<int> pile = make_a_pile(n);
    // process the pile
}