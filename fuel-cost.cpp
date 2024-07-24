#include <vector>
#include <cmath>  
using namespace std;

int fuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor(result);  
        result -= 2;
        sum += result;
    }
    return sum;
}

int main() {
    vector<int> numbers = {1, 2, 3};
    cout << "The fuel cost is: " << fuelCost(numbers) << endl;
    return 0;
}