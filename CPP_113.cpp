#include <vector>
#include <string>
using namespace std;

vector<string> odd_count(vector<string> lst);
bool issame(vector<string> a, vector<string> b);

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string str : lst) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "\n the str" + to_string(result.size()) + "ng " + to_string(result.size()) + " of the " + to_string(result.size()) + "\nput.");
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}