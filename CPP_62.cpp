/*
xs represent coefficients of a polynomial.
xs{0} + xs{1} * x + xs{2} * x^2 + ....
 Return derivative of this polynomial in the same form.
>>> derivative({3, 1, 2, 4, 5})
{1, 4, 12, 20}
>>> derivative({1, 2, 3})
{2, 6}
*/
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
vector<float> derivative(vector<float> xs){
	vector<float> ys;
	for(int i=1;i<xs.size();i++){
		ys.push_back(xs[i]*i);
	}
	return ys;
}
int main(){
	vector<float> xs;
	xs.push_back(3);
	xs.push_back(1);
	xs.push_back(2);
	xs.push_back(4);
	xs.push_back(5);
	vector<float> ys=derivative(xs);
	for(int i=0;i<ys.size();i++){
		printf("%f ",ys[i]);
	}
	printf("\n");
	return 0;
}
