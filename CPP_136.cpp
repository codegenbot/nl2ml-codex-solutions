bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    
    return true;
}

vector<int> largest_smallest_integers_cpp136(vector<int> lst){
    vector<int> result = {0, 0};
    int largest_negative = 0;
    int smallest_positive = 0;

    for (int num : lst) {
        if (num < 0 && num < largest_negative) {
            largest_negative = num;
        } else if (num > 0 && (num < smallest_positive || smallest_positive == 0)) {
            smallest_positive = num;
        }
    }

    result[0] = largest_negative;
    result[1] = smallest_positive;

    return result;
}