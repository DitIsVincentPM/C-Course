#include <iostream>

int main() {
    std::string people[] = {"John", "John", "John"};

    for (auto person: people) {
        std::cout << person << std::endl;
    }

    return 0;
}
