```c++
#include <vector>
using namespace std;

int basement(vector<int> v) {
    int sum = 0;
    int i = 0;
    while (i < v.size()) {
        sum += v[i];
        if (sum < 0)
            return i;
        i++;
    }
    return -1;
}

int main() { return basement(vector<int>{}); }