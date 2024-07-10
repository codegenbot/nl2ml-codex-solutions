#include <vector>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    
    if (str != string(str.rbegin(), str.rend()).s) return false; // check if it's balanced
    
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    
    return sum <= w;
}