int next_smallest(vector<int> lst){
    vector<int> temp = lst;
    if(temp.size() < 2) return -1; // Return None in Python
    sort(temp.begin(), temp.end());
    for(int i=0; i<temp.size()-1; i++){
        if(temp[i] != temp[i+1])
            return temp[i+1];
    }
    return -1; // Return None in Python
}