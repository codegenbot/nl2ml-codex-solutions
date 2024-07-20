#include <vector>
#include <cassert> // Include assert header

int solutions(std::vector<int> lst){
    int sum = 0;
    for(int i = 0; i < lst.size(); i += 2){
        if(lst[i] % 2 != 0){
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(solutions(std::vector<int>{3, 13, 2, 9}) == 3);
}