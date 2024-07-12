#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    bool first_negative = true, first_positive = true;

    for (int num : lst) {
        if (num < 0) {
            if (first_negative || num > largest_negative) {
                largest_negative = num;
                first_negative = false;
            }
        } else if (num > 0) {
            if (first_positive || num < smallest_positive) {
                smallest_positive = num;
                first_positive = false;
            }
        }
    }
    return {largest_negative, smallest_positive};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
}