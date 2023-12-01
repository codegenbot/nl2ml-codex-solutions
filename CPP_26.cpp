vector<int> remove_duplicates(vector<int> numbers);
  
bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers){
    vector<int> result; 
    for(int i=0; i<numbers.size(); i++){ 
        if(count(numbers.begin(), numbers.end(), numbers[i]) == 1){ 
            result.push_back(numbers[i]); 
        }
    }
    return result; 
}