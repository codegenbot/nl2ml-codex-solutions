string file_name_check(string file_name){
    int dotIndex = file_name.find(".");
    if(dotIndex == -1 || dotIndex == 0 || dotIndex == file_name.length()-1){
        return "No";
    }
    string beforeDot = file_name.substr(0, dotIndex);
    string afterDot = file_name.substr(dotIndex+1);
    if(beforeDot.length() == 0 || !isalpha(beforeDot[0])){
        return "No";
    }
    int digitCount = 0;
    for(int i=0; i<beforeDot.length(); i++){
        if(isdigit(beforeDot[i])){
            digitCount++;
        }
    }
    if(digitCount > 3){
        return "No";
    }
    if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll"){
        return "No";
    }
    return "Yes";
}