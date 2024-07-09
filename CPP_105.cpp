#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b) {
    return a == b;
}

vector<string> by_length(vector<int> arr) {
    vector<string> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(to_string(i));
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    return temp;
}

int main() {
    assert (issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
    // ...
}