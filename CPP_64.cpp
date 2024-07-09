#include <string>

int vowels_count(std::string s){
    int count = 0;
    std::string vowels = "aeiouyAEIOUY";
    for(char c : s){
        if(vowels.find(c) != std::string::npos){
            if(c == 'y' && s.find_last_of('y') == s.size() - 1){
                count++;
            } else if(vowels.find(c) < 5){
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(vowels_count("ACEDY") == 3);
    return 0;
}