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
Given a string representing the individual bowls in a 10-frame round of 10 pin bowling, return the score of that round.
For example,
input:
--------------------
output:
0
input:
XXXXXXXXXXXX
output:
300
input:
5/5/5/5/5/5/5/5/5/5/5
output:
150
input:
7115XXX548/279-X53
output:
145
input:
532/4362X179-41447/5
output:
100
*/

int score(string s) {
  int result = 0;
  int len = s.size();
  int index = 0;
  int frame = 0;
  while (index < len) {
    if (s[index] == 'X') {
      result += 10;
      if (s[index + 1] == 'X') {
        result += 10;
        if (s[index + 2] == 'X') {
          result += 10;
        } else {
          result += s[index + 2] - '0';
        }
      } else {
        if (s[index + 2] == '/') {
          result += 10;
        } else {
          result += s[index + 1] - '0';
          result += s[index + 2] - '0';
        }
      }
      index++;
    } else if (s[index] == '-') {
    } else if (s[index + 1] == '/') {
      result += s[index] - '0';
      result += 10 - s[index] + '0';
      if (s[index + 2] == 'X') {
        result += 10;
      } else {
        result += s[index + 2] - '0';
      }
      index += 2;
    } else {
      result += s[index] - '0';
      result += s[index + 1] - '0';
      index += 2;
    }
    frame++;
    if (frame == 10) {
      break;
    }
  }
  return result;
}

int main() {
  string s;
  while (cin >> s) {
    cout << score(s) << endl;
  }
}
