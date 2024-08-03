#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for(int i=1; i<lst.size(); i=i+2){
        if(lst[i]%2!=0) sum += lst[i];
    }
    return sum;
}

int main() {
    assert(solutions({3, 13, 2, 9}) == 16); 
    std::cout << "All tests passed.\n";
    return 0;
}