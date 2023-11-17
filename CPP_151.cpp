/*
Given a vector of numbers, return the sum of squares of the numbers
in the vector that are odd. Ignore numbers that are negative or not integers.

double_the_difference({1, 3, 2, 0}) == 1 + 9 + 0 + 0 = 10
double_the_difference({-1, -2, 0}) == 0
double_the_difference({9, -2}) == 81
double_the_difference({0}) == 0  

If the input vector is empty, return 0.
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
long long double_the_difference(vector<float> lst){
	long long sum = 0;
	for(int i = 0; i < lst.size(); i++){
		if(lst[i] > 0 && floor(lst[i]) == lst[i]){
			if((int)lst[i] % 2 != 0){
				sum += pow(lst[i], 2);
			}
		}
	}
	return sum;
}

int main(){
  vector<float> lst = {-2, 1, 3, 2, 0};
  int odd_sum = 1 + 9 + 0 + 0;
  assert (double_the_difference(lst) == odd_sum );
  lst = {-1, -2, 0};
  assert (double_the_difference(lst) == 0 );
  lst = {9, -2};
  assert (double_the_difference(lst) == 81 );
  lst = {0};
  assert (double_the_difference(lst) == 0 );
  lst = {};
  assert (double_the_difference(lst) == 0 );
  return 0;
}
