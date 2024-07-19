#include <iostream>
#include <cmath> 
using namespace std;

double rounded_avg(int n, int m);

rounded_avg(int n, int m) {
    if (n > m) return -1.0;
    double sum = 0.0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((sum / (m - n + 1)) * 2) / 2.0;
    return avg;
}