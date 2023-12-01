vector<int> sort_array(vector<int> array){
    if(array.size() <= 1){
        return array;
    }
    if((array[0] + array[array.size()-1]) % 2 == 0){
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}