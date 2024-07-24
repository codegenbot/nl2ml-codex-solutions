#include <vector>
#include <string>
#include <iostream>

using namespace std;

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
    vector<int> arr1 = {1, 2, 3};
    vector<string> result1 = by_length(arr1);

    for (string s : result1) {
        cout << s << "\n";
    }
    cout << "-----------------\n";

    return 0;
}