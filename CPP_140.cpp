#include<string>
using namespace std;

string fix_spaces(string text){
    string result = "";
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' ' && (i==0 || text[i-1] != ' ') && (i==text.length()-1 || text[i+1] != ' ')){
            result += '_';
        } else if(text[i] == ' '){
            bool is_consecutive = true;
            for(int j=i+1; j<text.length() && j-i > 2; j++){
                if(text[j] != ' '){
                    is_consecutive = false;
                    break;
                }
            }
            if(is_consecutive){
                result += '-';
            } else {
                result += '_';
            }
        } else {
            result += text[i];
        }
    }
    return result;
}