bool is_sorted(vector<int> lst){
        sort(lst.begin(), lst.end());
        for(int i = 1; i < lst.size(); i++){
            if(lst[i] == lst[i-1])
                return false;
        }
        return is_sorted_until(lst.begin(), lst.end());
    }