#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> make_a_pile(int n){
    assert(n > 0);
    std::vector<int> stones;
    stones.push_back(n);
    for(int i=1; i<n; i++){
        if(n%2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    // Your main function code here
    return 0;
}