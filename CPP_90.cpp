```cpp
int next_smallest(const std::vector<int>& lst) {
    std::vector<int> v = lst;  
    std::sort(v.begin(), v.end());
    if (v.size() < 2) return -1;
    return v[1];
}