#include <vector>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 0; i < lst.size(); i++){
        sum += lst[i];
    }
    return sum;
}