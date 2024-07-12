#include <vector>

int solutions(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

using namespace std;

int main() {
    assert(solutions({3, 13, 2, 9}) == 3);
    return 0;
}