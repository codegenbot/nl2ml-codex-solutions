#include <vector>
#include <cassert>
#include <ostream>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());
    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    vector<int> result(intersection.begin(), intersection.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(same(common({4, 3, 2, 8}, {}), {}));

    int n1, n2; // Input variables
    cout << "Enter the number of elements in list 1: ";
    cin >> n1;
    vector<int> l1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> l1[i];
    }

    cout << "Enter the number of elements in list 2: ";
    cin >> n2;
    vector<int> l2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> l2[i];
    }

    vector<int> result = common(l1, l2);
    cout << "Common elements between the two lists: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}