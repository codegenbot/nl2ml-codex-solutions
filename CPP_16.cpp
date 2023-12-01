#include <string>
#include <vector>
#include <cassert>

int count_distinct_characters(std::string str){
    std::vector<char> distinct_chars;
    
    for(int i = 0; i < str.length(); i++){
        char c = tolower(str[i]);
        if(std::find(distinct_chars.begin(), distinct_chars.end(), c) == distinct_chars.end()){
            distinct_chars.push_back(c);
        }
    }
    
    return distinct_chars.size();
}

int main(){
    assert (count_distinct_characters("Jerry jERRY JeRRRY") == 5);
    
    return 0;
}