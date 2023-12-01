#include <string>

std::string flip_case(std::string str){
    std::string result = "";
    for(int i = 0; i < str.length(); i++){
        if(islower(str[i])){
            result += toupper(str[i]);
        }
        else{
            result += tolower(str[i]);
        }
    }
    return result;
}

int main(){
    assert(flip_case("These violent delights have violent ends") == "tHese VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}