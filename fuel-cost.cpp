#include <iostream>
#include <vector>
using namespace std;

int calculateFuelCost(vector<int>& numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = floor((double)num / 3) - 2;
        total += result;
    }
    return total;
}

int main() {
    vector<int> numbers;
    int n, num;
    
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    cout << calculateFuelCost(numbers) << std::endl;

    return 0;
}