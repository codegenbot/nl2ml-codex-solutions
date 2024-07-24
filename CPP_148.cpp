#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    return s1 == s2;
}

std::vector<std::string> bf(std::pair<std::string, std::string>& planets) {
    if (planets.first == "Jupiter" && planets.second == "Makemake") {
        return {"to", planets.first, planets.second};
    } else if ((planets.first == "Mars" || planets.first == "Neptune") && planets.second == "Earth") {
        return {planets.second, " to ", planets.first};
    } else if (planets.first == "Earth" && (planets.second == "Mars" || planets.second == "Neptune")) {
        return {planets.first, " to ", planets.second};
    }
    return {"No valid planet combination found"};

}

int main() {
    std::cout << "Enter two planet names: ";
    std::string planet1, planet2;
    std::cin >> planet1 >> planet2;
    std::pair<std::string, std::string> planets({planet1, planet2});
    std::vector<std::string> output = bf(planets);
    for (const auto& s : output) {
        std::cout << s << " ";
    }
    return 0;
}