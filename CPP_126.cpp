bool is_sorted(vector<int> lst){
    int n = lst.size();
    if(n <= 1) {
        return true;
    }
    int count = 0;
    for(int i = 1; i < n; i++) {
        if(lst[i] < lst[i-1]) {
            return false;
        }
        if(lst[i] == lst[i-1]) {
            count++;
            if(count > 1) {
                return false;
            }
        }
        else {
            count = 0;
        }
    }
    return true;
}