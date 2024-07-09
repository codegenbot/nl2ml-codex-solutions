#include <vector>

namespace std {
    std::vector<int> make_a_pile(int n);

    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> make_a_pile(int n){
        std::vector<int> stones;
        stones.push_back(n);
        for(int i = 1; i < n; ++i){
            if(n % 2 == 0){
                n /= 2;
            } else {
                n = 3 * n + 1;
            }
            stones.push_back(n);
        }
        return stones;
    }
}