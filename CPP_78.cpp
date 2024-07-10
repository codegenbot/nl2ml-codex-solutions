#include <string>

int hex_key(string num) {
    if (num.empty()) {
        cout << "Error: Empty string." << endl;
        return -1;
    }
    
    int count = 0;
    for (char c : num) {
        if (c >= '2' && c <= '7') count++;
        else if ((c >= 'A' && c <= 'B') || (c >= 'D' && c <= 'F')) count++;
    }
    
    return count;
}