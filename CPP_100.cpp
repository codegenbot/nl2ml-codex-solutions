#include <vector>
#include <cassert>

namespace std {
    using ::vector;
    using ::bool;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

bool std::issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}