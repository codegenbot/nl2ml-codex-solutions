#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr){
    int product = 1;
    long long sum = 0;
    
    for(int i : arr){
        if(i == 0) continue; // ignore zero
        product *= (i > 0 ? 1 : -1); 
        sum += abs(i);
    }
    
    return (arr.size() == 0)? -32768: product * sum;
}