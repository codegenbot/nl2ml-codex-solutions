#include<vector>
#include<iostream>
#include<assert.h>
using namespace std;

pair<int, int> sum_product(int number){
    int sum = number;
    int product = number;

    return make_pair(sum, product);
}

int main2(){
    pair<int, int> result = sum_product(10);

    cout << "(" << result.first << ", " << result.second << ")" << endl;

    return 0;
}