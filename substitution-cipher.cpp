#include <iostream>
#include <string>

using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    for (char &c : message) {
        auto index = cipher1.find(c);
        if (index != string::npos) {
            c = cipher2[index];
        } else {
            index = cipher2.find(c);
            if (index != string::npos) {
                c = cipher1[index];
            }
        }
    }
    
    cout << message << endl;
    
    return 0;
}