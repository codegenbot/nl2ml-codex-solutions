#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> largest_smallest_integers(std::vector<int> a, std::vector<int> b) {
    int largest_negative = a[0], smallest_positive = a[0];
    for (int num : b) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive < 0)) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}