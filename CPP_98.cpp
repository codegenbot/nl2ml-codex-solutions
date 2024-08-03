#include <string>

int count_upper(const std::string& s){
    int count = 0;
    for(int i = 0; i < s.length(); i += 2){
        char c = s[i];
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            count++;
        }
    }
    return count;
}

int main() {
    assert(count_upper("EEEE") == 2);
    return 0;
}