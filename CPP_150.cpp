/*
A simple program which should return the value of x if n is 
a prime number and should return the value of y otherwise.

Examples:
for x_or_y(7, 34, 12) == 34
for x_or_y(15, 8, 5) == 5

*/
#include<stdio.h>
using namespace std;
int x_or_y(int n,int x,int y){
  int i=2;
  while(i<=n/2)
  {
    if(n%i==0)
    {
      return y;
    }
    i++;
  }
  return x;
  }
int main()
{
  int n,x,y;
  scanf("%d%d%d",&n,&x,&y);
  printf("%d",x_or_y(n,x,y));
  return 0;
}
