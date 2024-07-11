#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            temp.reserve(l.size());
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == 0) {
                    result.push_back(temp[0]);
                    temp.erase(temp.begin());
                } else {
                    result.push_back(l[j]);
                }
            }
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}