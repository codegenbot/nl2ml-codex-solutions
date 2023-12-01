#include <vector>
#include <iostream>

using namespace std;

vector<int> tri(int n);

vector<int> tri(int n) {
    vector<int> sequence;
    sequence.push_back(3);

    if (n == 0) {
        return sequence;
    }

    sequence.push_back(1 + n / 2);

    if (n == 1) {
        return sequence;
    }

    sequence.push_back(sequence[0] + sequence[1]);

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            sequence.push_back(1 + i / 2);
        } else {
            sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i - 3]);
        }
    }

    return sequence;
}

int main() {
    vector<int> result = tri(1);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}