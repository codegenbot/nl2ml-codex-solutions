/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>

    vector<int> out = {0,0};
    while(num>0){
        if(num%2) out[1]++;
        else out[0]++;
        num/=10;
    }
    // cout << num << endl;
    return out;
using namespace std;
vector<int> even_odd_count(int num){
