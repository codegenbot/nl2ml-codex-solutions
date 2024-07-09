```cpp
int solutions(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    vector<int> lst = {1, 2, 3, 4, 5};
    cout << solutions(lst) << endl;
    return 0;
}