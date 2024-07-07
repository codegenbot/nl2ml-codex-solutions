Here's the solution:

```cpp
bool is_sorted(vector<int> lst) {
    for(int i = 0; i < lst.size() - 1; i++) {
        if(lst[i] >= lst[i+1]) return false;
    }
    vector<int>::iterator it;
    it = unique(lst.begin(), lst.end());
    lst.erase(it, lst.end());
    return (lst.size() == 0 || (lst[0] == lst[1] && lst.size() == 1));
}