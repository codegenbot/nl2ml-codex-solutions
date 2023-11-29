vector<int> sort_array(vector<int> array){
    vector<int> sorted_array = array;
    if(array.empty()){
        return sorted_array;
    }
    if((array[0] + array[array.size()-1]) % 2 == 0){
        sort(sorted_array.rbegin(), sorted_array.rend());
    }else{
        sort(sorted_array.begin(), sorted_array.end());
    }
    return sorted_array;
}