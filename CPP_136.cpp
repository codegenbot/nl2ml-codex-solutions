#include <vector>
#include <limits>

using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    
    int max_negative = INT_MAX;
    int min_positive = 0;
    
    for (int num : lst) {
        if (num < 0 && num < max_negative) {
            max_negative = num;
        }
        else if (num > 0 && num < min_positive) {
            min_positive = num;
        }
    }
    
    result.push_back(max_negative);
    result.push_back(min_positive);
    
    return result;
}