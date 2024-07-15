#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(num > 0 && num == (int)num && (int)num % 2 != 0){
            sum += num * num;
        }
    }
    return sum;
}

int main(){
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.5, 5.0};
    long long result = double_the_difference(lst);
    return 0;
}