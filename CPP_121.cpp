```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int solution(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}
```