bool issame(vector<int> a,vector<int>b){
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert (issame({1, 4, 5}, remove_duplicates({1, 2, 3, 2, 4, 3, 5})));
}