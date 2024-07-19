#include <algorithm>
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            vector<float> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 2 == 0)
                    temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            result[i] = temp[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}