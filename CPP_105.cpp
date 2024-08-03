#include <vector>
#include <algorithm>
#include <iostream>

bool issame(int i) {
    if (i >= 1 && i <= 9) {
        switch (i) {
            case 1:
                return true;
            case 2:
                return false;
            case 3:
                return false;
            case 4:
                return false;
            case 5:
                return false;
            case 6:
                return false;
            case 7:
                return false;
            case 8:
                return false;
            case 9:
                return true;
        }
    }
    return false;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    for (int i : arr) {
        if (issame(i)) {
            string str = "";
            switch (i) {
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
    }
    return result;
}