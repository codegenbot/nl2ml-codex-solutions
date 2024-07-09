#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

using namespace std;

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    int largest_negative = INT_MIN, smallest_positive = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}