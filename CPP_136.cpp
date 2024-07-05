#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int largest_negative = 0;
    int smallest_positive = 0;
    bool found_negative = false;
    bool found_positive = false;

    for (int num : lst) {
        if (num < 0) {
            if (!found_negative || num > largest_negative) {
                largest_negative = num;
                found_negative = true;
            }
        } else if (num > 0) {
            if (!found_positive || num < smallest_positive) {
                smallest_positive = num;
                found_positive = true;
            }
        }
    }

    if (!found_negative) largest_negative = 0;
    if (!found_positive) smallest_positive = 0;

    return {largest_negative, smallest_positive};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    assert(issame(largest_smallest_integers({2, -5, -7, 8, 3}), {-5, 2}));
    assert(issame(largest_smallest_integers({0, 0, 0}), {0, 0}));
    assert(issame(largest_smallest_integers({-1, -2, -3}), {-1, 0}));
    assert(issame(largest_smallest_integers({1, 2, 3}), {0, 1}));
    cout << "All tests passed!" << endl;
    return 0;
}