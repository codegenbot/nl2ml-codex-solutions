#include <vector>
using namespace std;

int add(vector<int> lst) {
    int result = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 == 0)
            result += lst[i];
    }
    return result;
}