#include <vector>
#include <cassert>
#include <cmath>
using namespace std;

float max_element(vector<float> l){
    assert(!l.empty());
    float max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}