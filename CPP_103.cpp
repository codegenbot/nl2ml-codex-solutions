#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n,int m){
    if(n > m) return "-1";
    int sum = 0;
    for(int i=n; i<=m; i++){
        sum += i;
    }
    double avg = (double)sum / (m - n + 1);
    int rounded = floor(avg + 0.5);
    string res="";
    while(rounded>0){
        if(rounded&1)res="1"+res;
        else res="0"+res;
        rounded>>=1;
    }
    return res;
}