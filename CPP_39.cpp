/*
prime_fib returns n-th number that is a Fibonacci number and it's also prime.
>>> prime_fib(1)
2
>>> prime_fib(2)
3
>>> prime_fib(3)
5
>>> prime_fib(4)
13
>>> prime_fib(5)
89
*/
#include<stdio.h>
using namespace std;
int prime_fib(int n){
	int a=1,b=1,c=0;
	int i=0;
	while(i<n){
		c=a+b;
		a=b;
		b=c;
		if(c%2==0)
			continue;
		int j=3;
		while(j*j<=c){
			if(c%j==0)
				break;
			j+=2;
		}
		if(j*j>c)
			i++;
	}
	return c;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",prime_fib(n));
	return 0;
}
