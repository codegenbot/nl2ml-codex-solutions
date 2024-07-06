```
#include <cassert>
#include <vector>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) str += std::to_string(i);
    if (str != std::string(rbegin(str), rend(str))) return false;
    int sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    // Add more test cases as needed
    return 0;
}