```c++
#include <iostream>
#include <vector>
using namespace std;

int calculateFuelCost(vector<int> &vec) {
    int total = 0;
    for (int i : vec) {
        int result = (i / 3);
        if(result >= 2)
            total += result - 2;
    }
    return total;
}

int main() {
    vector<int> vec;
    int n;
    cin >> n;
    while(n--) {
        int num; 
        cin >> num;
        vec.push_back(num);
    }
    
    cout << calculateFuelCost(vec) << endl;

    return 0;
}