/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include <stdio.h>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
vector<int> even_odd_count(int num)
{
	int even = 0;
	int odd = 0;
	while (num != 0) {
		int digit = num % 10;
		if (digit % 2 == 0) {
			even++;
		}
		else {
			odd++;
		}
		num /= 10;
	}
	vector<int> result;
	result.push_back(even);
	result.push_back(odd);
	return result;
} int main()
{
	int num;
	scanf("%d", &num);
	vector<int> result = even_odd_count(num);
	printf("%d %d", result[0], result[1]);
	return 0;

}
