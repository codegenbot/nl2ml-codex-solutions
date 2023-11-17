/*
The Fib4 number sequence is a sequence similar to the Fibbonacci sequnece that's defined as follows:
fib4(0) -> 0
fib4(1) -> 0
fib4(2) -> 2
fib4(3) -> 0
fib4(n) -> fib4(n-1) + fib4(n-2) + fib4(n-3) + fib4(n-4).
Please write a function to efficiently compute the n-th element of the fib4 number sequence.  Do not use recursion.
>>> fib4(5)
4
>>> fib4(6)
8
>>> fib4(7)
14
*/
#include<stdio.h>
using namespace std;
int fib4(int n){
	int a=0,b=0,c=2,d=0,e=0;
	if(n==0) return 0;
	else if(n==1) return 0;
	else if(n==2) return 2;
	else if(n==3) return 0;
	else{
		for(int i=4;i<=n;i++){
			e=a+b+c+d;
			a=b;
			b=c;
			c=d;
			d=e;
		}
	}
	return e;
}
int main(){
	printf("%d\n",fib4(5));
	printf("%d\n",fib4(6));
	printf("%d\n",fib4(7));
}
