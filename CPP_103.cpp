#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) sum += i;
    double avg = (double)sum / (m - n + 1);
    avg = floor(avg + 0.5);
    string res = "";
    res = ""; // Initialize the string
    while(avg > 0){
        if(avg == (int)avg) res += '1';
        else res += '0';
        avg /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cout << rounded_avg(5, 5) << endl;
    return 0;
}