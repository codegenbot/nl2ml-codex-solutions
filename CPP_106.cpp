#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // even number
            int fact = 1;
            for (int j = 1; j <= i; j++)
                fact *= j;
            result[i - 1] = fact;
        } else { // odd number
            int sum = 0;
            for (int j = 1; j <= i; j++)
                sum += j;
            result[i - 1] = sum;
        }
    }
    return result;
}