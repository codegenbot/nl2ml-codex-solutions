```cpp
#include <vector>
using namespace std;

int main() {
    int basement(vector<int>& arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum < 0) return i;
        }
        return -1;
    }
    return 0;
}