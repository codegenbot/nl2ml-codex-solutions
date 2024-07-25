#include <string>
#include <cctype>

std::string encode(std::string message){
    std::string encodedMessage = "";
    for(char c : message){
        if(std::isalpha(c)){
            if(std::islower(c)){
                c = std::toupper(c);
            } else {
                c = std::tolower(c);
            }
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                encodedMessage += char(c + 2);
            } else {
                encodedMessage += c;
            }
        } else {
            encodedMessage += c;
        }
    }
    return encodedMessage;
}