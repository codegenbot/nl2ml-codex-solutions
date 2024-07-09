#include <vector>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result(xs.size() - 1);
    for (int i = 1; i < xs.size(); ++i) {
        result[i-1] = (xs[i] - xs[i-1]) / (i * 1.0);
    }
    return result;
}