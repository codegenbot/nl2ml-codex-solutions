#include <string>
#include <algorithm>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++) {
        sum += i;
    }
    double avg = (double)sum / (m-n+1);
    avg = floor(avg + 0.5); 
    string res = "";
    while(avg > 0){
        if((int)avg & 1) res.push_back('1');
        else res.push_back('0');
        (int)avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}