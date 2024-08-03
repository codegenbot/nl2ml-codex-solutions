#include <utility>
#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return std::make_pair(eaten, left);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}