#include <iostream>

int main() {
    std::string name = "vincent";

    std::string *pName = &name;

    std::cout << *pName << std::endl;

    return 0;
}