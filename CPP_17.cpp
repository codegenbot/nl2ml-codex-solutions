vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while(i < music_string.length()){
        if(music_string[i] == 'o'){
            beats.push_back(4);
            i++;
        }else if(music_string[i] == ' '){
            i++;
        }else{
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}