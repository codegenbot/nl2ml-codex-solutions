#include <iostream>
#include <vector>
using namespace std;

int findNextSmallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;

}

int main() {
    cout << findNextSmallest({-35, 34, 12, -45}) << endl;
    return 0;
}