#include <vector>

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == floor(lst[i]) && (int)lst[i] % 2 == 1){
            sum += lst[i] * lst[i];
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.5, 3.5, 4.5, 5.5};
    long long odd_sum = double_the_difference(lst);
    return 0;
}