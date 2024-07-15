if(file_name.empty()) return "No";
int dotIndex = file_name.find('.');
if(dotIndex == string::npos || dotIndex == 0 || dotIndex == file_name.length()-1) return "No";
string beforeDot = file_name.substr(0, dotIndex);
string afterDot = file_name.substr(dotIndex + 1);

int digitCount = 0;
for(char c : beforeDot){
    if(isdigit(c)) digitCount++;
}
if(digitCount > 3 || !isalpha(beforeDot[0])) return "No";

if(afterDot != "txt" && afterDot != "exe" && afterDot != "dll") return "No";

return "Yes";
}