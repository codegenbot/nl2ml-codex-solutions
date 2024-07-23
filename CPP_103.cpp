#include <cmath>

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    double avg = round((double)sum / ((long)(m - n + 1)));
    string bin = "";
    while (avg > 0) {
        if (avg >= 2)
            bin += '1', avg -= 2;
        else
            bin += '0';
        avg /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}