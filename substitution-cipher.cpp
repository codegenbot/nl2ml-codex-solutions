#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    getline(cin, cipher1);
    getline(cin, cipher2);
    getline(cin, message);
    
    for (char &c : message) {
        size_t idx = cipher1.find(c);
        if (idx != string::npos) {
            c = cipher2[idx];
        } else {
            idx = cipher2.find(c);
            if (idx != string::npos) {
                c = cipher1[idx];
            } else { 
                // Do nothing for characters not found in either cipher
            }
        }
    }
    
    cout << message << endl;
    
    return 0;
}