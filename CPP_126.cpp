bool is_sorted(vector<int> lst){
    for(int i=1; i<lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
    }
    vector<int> temp = lst;
    sort(temp.begin(),temp.end());
    for(int i=0; i<lst.size(); i++){
        if(temp[i] != lst[i]) return false;
    }
    return true;
}