#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        bool found = false;
        for (size_t i = 0; i < cipher1.size(); ++i) {
            if (c == cipher2[i]) { 
                c = cipher1[i];     
                found = true;
                break;
            }
        }

        if (!found) {
            c = '*';
        }
    }

    cout << message << endl;

    return 0;
}