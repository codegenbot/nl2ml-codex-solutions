#include <vector>
using namespace std;

int basement(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += arr[j];
            if (sum < 0) return j;
        }
    }
    return -1; // or throw an exception, depending on the requirements
}