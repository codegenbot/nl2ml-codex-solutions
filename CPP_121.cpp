/*
Given a non-empty vector of integers, return the sum of all of the odd elements that are in even positions.


Examples
solution({5, 8, 7, 1}) ==> 12
solution({3, 3, 3, 3, 3}) ==> 9
solution({30, 13, 24, 321}) ==>0
*/
#include <stdio.h>
#include <vector>
using namespace std;
int solutions(vector<int> lst){
    int sum=0;
    for(int i=0;i<lst.size();i++){
      if(i%2==0){
        if(lst[i]%2!=0){
          sum+=lst[i];
        }
      }
    }
    return sum;
  }
  
  int main(){
    vector<int> lst;
    lst.push_back(5);
    lst.push_back(8);
    lst.push_back(7);
    lst.push_back(1);
    printf("%d\n",solutions(lst));
  }
