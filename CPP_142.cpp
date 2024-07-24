#include <vector>
using namespace std;

int sum_squares(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if ((i + 1) % 3 == 0 && (i + 1) % 4 != 0) {
            sum += lst[i] * lst[i];
        } else if ((i + 1) % 4 == 0 && (i + 1) % 3 != 0) {
            sum += pow(lst[i], 3);
        } else {
            sum += lst[i];
        }
    }
    return sum;
}