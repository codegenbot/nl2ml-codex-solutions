Here's the solution:

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1] && count(lst.begin(), lst.end(), lst[i]) == 1)
            continue;
        else
            return false;
    }
    return true;
}