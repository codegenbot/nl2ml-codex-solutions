bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            vector<int> temp;
            for(int j = 0; j < i; j++) temp.push_back(lst[j]);
            if(count(temp.begin(), temp.end(), lst[i]) > 1) return false;
            return false;
        }
    }
    return true;
}