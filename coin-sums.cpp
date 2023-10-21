#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.
For example,
input:
1
output:
1
0
0
0
input:
2
output:
2
0
0
0
input:
3
output:
3
0
0
0
input:
4
output:
4
0
0
0
input:
5
output:
0
1
0
0
*/
int main() {
    int n;
    while(cin>>n){
        int quarter = n/25, dime = 0, nickle = 0, penny = 0;
        if(n>=10){
            dime = (n-quarter*25)/10;
            if(n>=5){
                nickle = (n-quarter*25-dime*10)/5;
                penny = n-quarter*25-dime*10-nickle*5;
            }
            else{
                penny = n-quarter*25-dime*10;
            }
        }
        else{
            penny = n;
        }
        cout<<penny<<endl;
        cout<<nickle<<endl;
        cout<<dime<<endl;
        cout<<quarter<<endl;
    }
    return 0;
}
