#include <vector>
#include <cassert>
using namespace std;

int main() {
    assert (add({4, 4, 6, 8}) == 12);
}

int add(vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0) sum += lst[i];
    }
    return sum;
}