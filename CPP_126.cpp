Here's the completed code:

```cpp
bool is_sorted(vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) return false;
        int count = 0;
        for (int j = i; j < lst.size(); j++) {
            if (lst[j] == lst[i]) count++;
            else break;
        }
        if (count > 1) return false;
    }
    return true;
}