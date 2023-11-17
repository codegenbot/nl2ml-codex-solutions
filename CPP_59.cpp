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
	int i=2;
	while(n>1){
		if(n%i==0){
			n=n/i;
		}
		else{
			i++;
		}
	}
	return i;
}
