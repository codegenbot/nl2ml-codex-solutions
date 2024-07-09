string find_max(vector<string> words){
    string result = *words.begin();
    for(auto word : words){
        if(count(word.begin(),word.end(),unique(word.begin(),word.end())) > count(result.begin(),result.end(),unique(result.begin(),result.end()))){
            result = word;
        } else if(count(word.begin(),word.end(),unique(word.begin(),word.end())) == count(result.begin(),result.end(),unique(result.begin(),result.end())) && word < result){
            result = word;
        }
    }
    return result;
}