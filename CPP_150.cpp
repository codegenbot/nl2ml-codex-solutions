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
    int i,flag=0;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        return x;
    else
        return y;
}
int main()
{
    int n,x,y;
    printf("Enter the value of n,x and y");
    scanf("%d%d%d",&n,&x,&y);
    printf("%d",x_or_y(n,x,y));
    return 0;
}
