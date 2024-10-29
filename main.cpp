#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Enter your fullVi name: \n";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: \n";
    std::cin >> age;

    std::cout << "Welcome, " << name << std::endl;
    std::cout << "You are, " << age << " years old" <<std::endl;

    return 0;
}
