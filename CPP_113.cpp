vector<string> odd_count(vector<string> lst){
    vector<string> res;
    for(const auto& str : lst){
        int count = 0;
        for(const char& c : str){
            if((c - '0') % 2 != 0){
                count++;
            }
        }
        res.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + str + " of the " + to_string(count) + "nput.");
    }
    return res;
}