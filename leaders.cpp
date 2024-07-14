#include <vector>
using namespace std;

vector<int> leaders(vector<int>& vec) {
    vector<int> result;
    int rightmost = vec[vec.size() - 1];
    for (int i = vec.size() - 2; i >= 0; i--) {
        if (vec[i] >= rightmost) {
            rightmost = vec[i];
            result.push_back(rightmost);
        }
    }
    return result;
}