#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int countEven = 0, countOdd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;
        
        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - 1 - j]) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome && i % 2 == 0) {
            countEven++;
        } else if (isPalindrome && i % 2 != 0) {
            countOdd++;
        }
    }
    
    result.push_back(countEven);
    result.push_back(countOdd);
    
    return result;
}