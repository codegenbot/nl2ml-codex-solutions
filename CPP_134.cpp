if(txt.empty()) return false;
char lastChar = txt.back();
if(isalpha(lastChar) && (txt.size() == 1 || txt[txt.size()-2] == ' ')) return true;
return false;