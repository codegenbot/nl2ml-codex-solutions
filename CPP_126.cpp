Here's the completed code:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        int count = count(lst.begin(), it, *it);
        if(count > 1) {
            return false;
        }
    }
    return true;
}