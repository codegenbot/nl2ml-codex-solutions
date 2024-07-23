#include <vector>
#include <iostream>

using namespace std;

int luhnCheck(vector<int> digits) {
    int sum = 0;
    bool alternate = false;
    
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        alternate = !alternate;
    }
    
    return sum;
}

int main() {
    int n;
    vector<int> digits(16);
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    
    cout << luhnCheck(digits) << endl;
    
    return 0;
}