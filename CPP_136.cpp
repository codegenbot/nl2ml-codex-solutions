#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    int max_neg = 0;
    int min_pos = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > max_neg) {
            max_neg = num;
        }
        else if (num > 0 && num < min_pos) {
            min_pos = num;
        }
    }
    
    return {(max_neg > 0 ? 0 : max_neg), (min_pos < 1 ? 0 : min_pos)};
}