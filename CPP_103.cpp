#include <string>
#include <cassert>

using namespace std;

string calculate_binary_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    string binary_avg = "";
    while (avg > 0) {
        binary_avg = to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}