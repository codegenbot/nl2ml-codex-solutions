Here is the completed code:

#include <iostream>
#include <vector>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst) {
    vector<int> result;
    int maxNegative = 0, minPositive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > maxNegative) {
            maxNegative = num;
        } else if (num > 0 && num < minPositive) {
            minPositive = num;
        }
    }

    result.push_back(maxNegative);
    result.push_back(minPositive);

    return result;
}