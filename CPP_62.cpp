#include <iostream>
#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i <= xs.size() - 1; ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    vector<float> xs = {3, 1, 2, 4, 5};
    vector<float> derivativeResult = derivative(xs);

    for (float x : derivativeResult) {
        cout << x << " ";
    }
    cout << endl;

    xs = {1, 2, 3};
    derivativeResult = derivative(xs);

    for (float x : derivativeResult) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}