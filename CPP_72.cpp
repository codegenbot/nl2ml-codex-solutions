Here is the completed code:

```cpp
bool will_it_fly(vector<int> q, int w) {
    string s = "";
    for(int i : q) {
        s += to_string(i);
    }
    if(s != reverse(s).s) return false; // not balanced
    
    int sum = 0;
    for(int i : q) {
        sum += i;
    }
    return sum <= w;
}