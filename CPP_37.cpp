```cpp
vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for(int i = 0; i < l.size(); i++) {
        if(i % 2 == 0) {
            vector<float> evenVals;
            for(int j = 0; j < l.size(); j++) {
                if(j % 2 == 0) {
                    evenVals.push_back(l[j]);
                }
            }
            sort(evenVals.begin(), evenVals.end());
            result.push_back(evenVals[0]);
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}
bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}