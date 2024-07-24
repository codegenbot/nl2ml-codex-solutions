#include <string>

using namespace std;

string change_base(int x, int base) {
    if (x == 0)
        return "0";
    
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        if (remainder >= 10) {
            switch (remainder) {
                case 10:
                    result.insert(0, "A");
                    break;
                case 11:
                    result.insert(0, "B");
                    break;
                case 12:
                    result.insert(0, "C");
                    break;
                case 13:
                    result.insert(0, "D");
                    break;
                case 14:
                    result.insert(0, "E");
                    break;
                case 15:
                    result.insert(0, "F");
                    break;
            }
        } else {
            result.insert(0, to_string(remainder));
        }
        x /= base;
    }
    
    return result;
}