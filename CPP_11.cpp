Here is the completed code:

```cpp
string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}