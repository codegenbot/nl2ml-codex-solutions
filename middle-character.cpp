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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
*/
int main() {
    // Insert code here...
    char line[1024];
    while (gets(line) != NULL) {
        int n = strlen(line);
        if (n == 1) {
            printf("%c\n",line[0]);
        }
        else{
            printf("%c%c\n",line[n/2-1],line[n/2]);
        }
    }
    return 0;
}
