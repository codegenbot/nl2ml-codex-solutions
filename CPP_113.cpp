vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].length(); j++){
            if((lst[i][j] - '0') % 2 != 0){
                count++;
            }
        }
        string output = "the number of odd elements " + to_string(count) + "n the str" + to_string(i+1) + "ng " + to_string(i+1) + " of the " + to_string(i+1) + "nput.";
        result.push_back(output);
    }
    return result;
}