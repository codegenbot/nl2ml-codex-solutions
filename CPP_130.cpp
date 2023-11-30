#include <vector>

vector<int> tri(int n) {
    vector<int> sequence;
    if (n >= 0) {
        sequence.push_back(3);
        if (n >= 1) {
            sequence.push_back(1 + n / 2);
            for (int i = 2; i <= n; i++) {
                if (i % 2 == 0) {
                    sequence.push_back(1 + i / 2);
                } else {
                    sequence.push_back(sequence[i - 1] + sequence[i - 2] + sequence[i + 1]);
                }
            }
        }
    }
    return sequence;
}