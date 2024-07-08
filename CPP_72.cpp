#include <cassert>
#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

bool will_it_fly(const std::vector<int>& q, int w) {
    bool result = true;
    for(int i = 0; i < q.size() / 2; ++i) {
        if(q[i] != q[q.size() - i - 1]) {
            result = false;
            break;
        }
    }
    int sum = 0;
    for(int weight : q) {
        sum += weight;
    }
    return result && sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    std::vector<int> weights;
    int total_weight;
    
    std::cout << "Enter the number of weights: ";
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter weight " << i + 1 << ": ";
        int weight;
        std::cin >> weight;
        weights.push_back(weight);
    }
    
    std::cout << "Enter the total weight limit: ";
    std::cin >> total_weight;
    
    if(will_it_fly(weights, total_weight)) {
        std::cout << "The package will fly.\n";
    } else {
        std::cout << "The package won't fly.\n";
    }
}