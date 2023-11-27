string file_name_check(string file_name){
    int dotIndex = file_name.find(".");
    if(dotIndex == -1) return "No";
    
    string name = file_name.substr(0, dotIndex);
    string extension = file_name.substr(dotIndex + 1);
    
    if(name.length() == 0 || !isalpha(name[0])) return "No";
    if(extension != "txt" && extension != "exe" && extension != "dll") return "No";
    
    int digitCount = 0;
    for(char c : name){
        if(isdigit(c)) digitCount++;
    }
    if(digitCount > 3) return "No";
    
    return "Yes";
}