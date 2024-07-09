#include <vector>
#include <cassert>

bool is_same(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integers_func(vector<int> lst){
    int largest_negative = 0, smallest_positive = 0;
    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }
    return {largest_negative, smallest_positive};
}