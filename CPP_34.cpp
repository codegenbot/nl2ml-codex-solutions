#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.size(), 0); 
    copy(l.begin(), l.end(), result.begin()); 
    result.erase(unique(result.begin(), result.end()), result.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}