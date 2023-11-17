/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
#include<iostream>
*/
int solutions(vector<int> lst){
#include<stdio.h>
#include<vector>
    int sum=0;
    for(int i=0;i<lst.size();i++){
        if(lst[i]%2==0 && i%2==0){
            sum+=lst[i];
        }
    }
    return sum;
}
using namespace std;
int main(){
    vector<int> vec;
    vec={5, 8, 7, 1};
    cout<<solutions(vec);
}
