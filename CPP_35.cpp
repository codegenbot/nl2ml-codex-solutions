```
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float max_element(vector<float> l){
    float max = l[0];
    for(int i=1; i<l.size(); i++){
        if(l[i] > max)
            max = l[i];
    }
    return max;
}

int main() {
    // Your test code here
}