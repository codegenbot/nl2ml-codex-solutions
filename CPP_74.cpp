```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }

    if (!lst1.size() && !lst2.size()) return {};

    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        if (same(lst1, lst2)) return lst1;
        else return lst2;
    }
}

int solutionMain() {
    int n1, n2;
    cout << "Enter the number of strings for list 1: ";
    cin >> n1;
    vector<string> lst1(n1);
    cout << "Enter string " << n1 << " for list 1:\n";
    for (int i = 0; i < n1; i++) {
        cin >> lst1[i];
    }

    cout << "Enter the number of strings for list 2: ";
    cin >> n2;
    vector<string> lst2(n2);
    cout << "Enter string " << n2 << " for list 2:\n";
    for (int i = 0; i < n2; i++) {
        cin >> lst2[i];
    }

    if (same(lst1, lst2)) {
        cout << "The lists are the same.\n";
    } else {
        vector<string> result = match(lst1, lst2);
        if (equal(result.begin(), result.end(), lst1.begin())) {
            cout << "List 1 is the match of list 2.\n";
        } else {
            cout << "List 2 is the match of list 1.\n";
        }
    }

    return 0;
}