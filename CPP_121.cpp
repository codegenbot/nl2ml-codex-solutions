```
#include <iostream>
#include <vector>

using namespace std;

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 1 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> lst = {3, 13, 2, 9};
    int sum = solutions(lst);
    cout << "The sum of odd numbers in the list is: " << sum << endl;
    return 0;
}
```