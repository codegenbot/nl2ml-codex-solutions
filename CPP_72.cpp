#include <vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0;
    for (int num : q) {
        sum += num;
    }
    return (q == vector<int>(q.rbegin(), q.rend())) && (sum <= w);
}