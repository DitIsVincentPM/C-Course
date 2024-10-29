#include <iostream>
#include <cmath>

int main() {
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    /*if(name.length() > 12) {
        std::cout << "Your name is too long!\n";
    } else {
        std::cout << "Your name is too short!\n";
    }*/

    return 0;
}
