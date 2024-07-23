#include <iostream>
#include <assert.h>
#include <vector>

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 != 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int calculateSolutions(vector<int> lst) {
    assert(solutions({3, 13, 2, 9}) == 13);
    cout << solutions({1, 4, 5, 10}) << endl;
    return 0;
}