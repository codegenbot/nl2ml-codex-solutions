vector<int> incr_list(vector<int> l){
    vector<int> result;
    
    for(auto num : l){
        result.push_back(num + 1);
    }
    
    return result;
}