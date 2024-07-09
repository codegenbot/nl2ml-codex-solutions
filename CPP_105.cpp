#include <vector>
#include <algorithm>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<int> temp;
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            temp.push_back(i);
        }
    }
    
    sort(temp.begin(), temp.end());
    
    std::vector<std::string> result;
    for (int i : temp) {
        string s = "";
        switch (i) {
            case 1:
                s = "One";
                break;
            case 2:
                s = "Two";
                break;
            case 3:
                s = "Three";
                break;
            case 4:
                s = "Four";
                break;
            case 5:
                s = "Five";
                break;
            case 6:
                s = "Six";
                break;
            case 7:
                s = "Seven";
                break;
            case 8:
                s = "Eight";
                break;
            case 9:
                s = "Nine";
                break;
        }
        result.push_back(s);
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}