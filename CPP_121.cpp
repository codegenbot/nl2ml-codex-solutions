#include <vector>

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        if (i % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}