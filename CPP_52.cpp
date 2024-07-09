```cpp
#include <vector>
#include <iostream>

using namespace std;

bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

bool getNumbers(vector<int>& numbers, int& threshold) {
    cout << "Enter the threshold: ";
    cin >> threshold;

    cout.fill('0');
    cout.width(5);
    for(int i=0; i<5; i++) {
        cout << "Enter number #"<<i+1<<": ";
        cin >> numbers[i];
    }
    
    return true;
}

int main() {
    int threshold;
    vector<int> numbers(5); 

    if(getNumbers(numbers, threshold)) {
        if(below_threshold(numbers, threshold)) {
            cout << "All numbers are below the threshold." << endl;
        } else {
            cout << "At least one number is not below the threshold." << endl;
        }
    }

    return 0;
}