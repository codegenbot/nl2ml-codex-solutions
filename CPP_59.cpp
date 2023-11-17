/*
Return the largest prime factor of n. Assume n > 1 and is not a prime.
>>> largest_prime_factor(13195)
29
>>> largest_prime_factor(2048)
2
*/
#include<stdio.h>
using namespace std;
int largest_prime_factor(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			n=n/i;
			i--;
		}
	}
	return i;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",largest_prime_factor(n));
	return 0;
}
