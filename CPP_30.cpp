#include <vector>
#include <algorithm>

using namespace std;

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float f : l) {
        if (f > 0) {
            result.push_back(f);
        }
    }
    return result;
}