vector<float> sort_even(vector<float> l){
    vector<float> result;
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            result.push_back(l[i]);
        }
    }
    sort(result.begin(), result.end());
    for(int i=0, j=0; i<l.size(); i++){
        if(i % 2 == 0){
            l[i] = result[j++];
        }
    }
    return l;
}