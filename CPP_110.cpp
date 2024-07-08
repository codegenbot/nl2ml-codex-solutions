```cpp
int exchange(vector<int> lst1, vector<int> lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    swap(lst1[lst1.size() - 1], lst2[lst2.size() - 1]);
                    found = true;
                    break;
                }
            }
            if (!found) return 0;
        }
    }
    return 1;
}