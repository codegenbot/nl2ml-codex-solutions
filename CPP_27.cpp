#include <string>
using namespace std;

string flip_case(string str){
    for(char &c : str){
        if(islower(c)){
            c = toupper(c);
        } else if(isupper(c)){
            c = tolower(c);
        }
    }
    return str;
}

int main(){
    assert(flip_case("Hello, World!") == "hELLO, wORLD!");
    return 0;
}