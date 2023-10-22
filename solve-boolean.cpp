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
Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
For example,
input:
t
output:
True
input:
f
output:
False
input:
f&f
output:
False
input:
f&t
output:
False
input:
t&f
output:
False
*/
int main() {
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'T') {
            s.push('T');
        } else if (str[i] == 'F') {
            s.push('F');
        } else if (str[i] == '|') {
            char a = s.top();
            s.pop();
            char b = s.top();
            s.pop();
            if (a == 'T' || b == 'T') {
                s.push('T');
            } else {
                s.push('F');
            }
        } else if (str[i] == '&') {
            char a = s.top();
            s.pop();
            char b = s.top();
            s.pop();
            if (a == 'F' || b == 'F') {
                s.push('F');
            } else {
                s.push('T');
            }
        }
    }
    if (s.top() == 'T') {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
