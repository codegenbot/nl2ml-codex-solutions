#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float i : lst){
        int rounded = ceil(i);
        total += pow(rounded,2);
    }
    return total;
}

int main() {
    assert (sum_squares({-1,1,0})==2);  
}