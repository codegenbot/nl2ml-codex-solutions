#include <vector>
using namespace std;

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for(float num : lst){
        sum += ceil(num) * ceil(num);
    }
    return sum;
}