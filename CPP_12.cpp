using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string longest = strings[0];
    for(auto s : strings){
        if(s.length() > longest.length()){
            longest = s;
        }
    }
    return longest;
}