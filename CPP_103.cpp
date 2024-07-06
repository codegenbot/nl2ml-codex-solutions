#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round(sum / (m - n + 1));
    string binary = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg /= 2;
            binary.push_back('1');
        } else {
            avg = round(avg);
            binary.push_back('0');
        }
    }
    reverse(binary.begin(), binary.end());
    return binary;
}