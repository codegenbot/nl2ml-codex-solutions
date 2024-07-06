```cpp
#include <initializer_list>
#include <vector>
#include <bits/stdc++.h>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> result = make_a_pile(n);
}