```cpp
#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}

int main() {
    vector<int> digits = {4, 7, 8, 1, 3, 2, 8, 5, 6, 9, 0, 8, 4, 1, 5, 9};
    int result = luhn(digits);
    cout << "Result: " << result << endl;
    return 0;
}