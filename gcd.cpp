#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int index = 0;
    while (index <= text.length() - target.length()) {
        index = text.find(target, index);
        if (index == string::npos)
            break;
        result.push_back(index);
        index += target.length(); // start searching from the end of current match
    }
    return result;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int gcd = __gcd(num1, num2);

    cout << gcd << endl;

    string text, target;
    cin >> text >> target;

    vector<int> indices = findIndices(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}