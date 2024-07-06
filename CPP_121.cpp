```cpp
#include<iostream>
using namespace std;

int solutions(vector<int> lst);

int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> lst;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }
    cout << solutions(lst);
}