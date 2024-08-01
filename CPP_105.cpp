#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int num : arr) {
        string str = "";
        switch (num) {
            case 1:
                str = "One";
                break;
            case 2:
                str = "Two";
                break;
            case 3:
                str = "Three";
                break;
            case 4:
                str = "Four";
                break;
            case 5:
                str = "Five";
                break;
            case 6:
                str = "Six";
                break;
            case 7:
                str = "Seven";
                break;
            case 8:
                str = "Eight";
                break;
            case 9:
                str = "Nine";
                break;
        }
        result.push_back(str);
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Four", "Eight"}));
}