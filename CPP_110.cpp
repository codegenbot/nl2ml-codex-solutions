string exchange(vector<int> lst1,vector<int> lst2){
    for(int i=0; i<lst1.size(); i++){
        if(lst1[i] % 2 != 0){
            for(int j=0; j<lst2.size(); j++){
                if(lst2[j] % 2 == 0){
                    swap(lst1[i], lst2[j]);
                    break;
                }
            }
            if(lst1[i] % 2 != 0){
                return "NO";
            }
        }
    }
    return "YES";
}