Here is the completed code:

```cpp
int count_upper(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'E') || (s[i] >= 'A' && s[i] <= 'U')) ||
            (i % 2 != 0 && (s[i] >= 'I' && s[i] <= 'U'))) {
            count++;
        }
    }
    return count;
}