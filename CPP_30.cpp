#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float num : l) {
        if(num > 0) {
            result.push_back(num);
        }
    }
    return result;
}