#include <vector>
#include <string>

using namespace std;

vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (int i = 0; i < lst.size(); ++i) {
        int count = 0;
        for (char c : lst[i]) {
            if (c - '0' % 2 != 0) {
                count++;
            }
        }
        string temp = "the number of odd elements ";
        temp += to_string(count);
        temp += " in the str" + to_string(i+1) + " of the input.";
        result.push_back(temp);
    }
    return result;
}