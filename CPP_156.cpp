#include <string>

string int_to_mini_romank(int number){
    string roman[] = {"i", "iv", "v", "ix", "x", "xl", "l", "xc", "c", "cd", "d", "cm", "m"};
    int values[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string result = "";
    
    int i = 12;
    while(number > 0){
        int div = number / values[i];
        number %= values[i];
        
        while(div--){
            result += roman[i];
        }
        i--;
    }
    
    return result;
}

int main() {
    int number;
    cin >> number;
    cout << int_to_mini_romank(number) << endl;
    return 0;
}