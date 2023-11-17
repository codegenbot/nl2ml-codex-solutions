/*
Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
>>> fizz_buzz(50)
0
>>> fizz_buzz(78)
2
>>> fizz_buzz(79)
3
*/
#include<stdio.h>
using namespace std;
int fizz_buzz(int n){
  int c=0;
  for(int i=7;i<n;i++)
  {
    if(i%11==0 || i%13==0)
    {
      int j=i;
      while(j>0)
      {
        if(j%10==7)
        {
          c++;
        }
        j=j/10;
      }
    }
  }
  return c;
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d",fizz_buzz(n));
}
