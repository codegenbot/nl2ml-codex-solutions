/*
Given a positive integer n, return the count of the numbers of n-digit
positive integers that start or end with 1.
*/
#include<stdio.h>
using namespace std;
int starts_one_ends(int n){
	int count = 0;
	for(int i = 1; i <= n; i++){
		count += pow(10, i-1);
	}
	return count;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", starts_one_ends(n));
	return 0;
}
