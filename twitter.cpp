#include <string>
#include <iostream>

int main() {
    std::string tweet;
    std::cin >> std::ws;
    getline(std::cin, tweet);

    if (tweet.empty()) {
        std::cout << "You didn't type anything" << std::endl;
    } else if (tweet.length() > 140) {
        std::cout << "Too many characters" << std::endl;
    } else {
        std::cout << "Your tweet has " << tweet.length() << " characters" << std::endl;
    }
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}