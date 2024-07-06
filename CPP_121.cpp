#include <vector>
#include <cassert>
#include <initializer_list>

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for(int i = 0; i < lst.size(); i++) {
        if(i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;

}

int main() {
    vector<int> input = {3, 13, 2, 9};
    assert(solutions(input) == 15);
}