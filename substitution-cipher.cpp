#include <iostream>

using namespace std;

string cipher1, cipher2, message;
cin >> cipher1 >> cipher2 >> message;

for (char &c : message) {
    if (c == cipher1[0]) {
        c = cipher2[0];
    } else if (c == cipher2[0]) {
        c = cipher1[0];
    }
}

std::cout << message << std::endl;

return 0;