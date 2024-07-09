```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); ) {
        if (i % 3 == 0 && i < l.size() - 2) {
            vector<int> temp;
            for (int j = i; j < l.size() && j < i + 3; j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
            }
            i += 2;
        } else {
            result.push_back(l[i]);
            i++;
        }
    }
    // Add this condition to append the remaining elements
    if(i < l.size()) {
        while(i < l.size()) {
            result.push_back(l[i]);
            i++;
        }
    }
    return result;
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {5, 6, 3, 4, 8, 9, 2};

    cout << "l1: ";
    for (int i : l1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "l2: ";
    for (int i : l2) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> result1 = sort_third(l1);
    vector<int> result2 = sort_third(l2);

    cout << "result1: ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "result2: ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}