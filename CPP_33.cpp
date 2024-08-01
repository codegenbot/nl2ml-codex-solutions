#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 != 0) {
            result.push_back(l[i]);
        } else {
            vector<int> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == i % 3) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result.insert(result.begin() + i, temp[0]);
        }
    }
    return result;
}