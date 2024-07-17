#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while ((index = text.find(target)) != string::npos) {
        indices.push_back(index);
        index += target.length();
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}