#include <iostream>
#include <cmath>

int main() {
    double temp;
    char unit;

    std::cout << "What is your starting unit: F = Farenhite, C = Celcius: \n";
    std::cin >> unit;

    if (unit == 'C') {
        std::cout << "Enter temperature in Celsius: \n";
        std::cin >> temp;

        temp = (1.8*temp) + 32;
        std::cout << "It's " << temp << " farenhite.\n";
    } else {
        std::cout << "Enter temperature in Fahrenheit: \n";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "It's " << temp << " celcius.\n";
    }

    return 0;
}
