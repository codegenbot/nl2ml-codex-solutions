#include <vector>
#include <cmath>  
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor((double)result);  
        result -= 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> numbers = {12, 14};
    cout << fuelCost(numbers) << endl;
    return 0;
}