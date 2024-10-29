#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    double c;

    std::cout << "Enter a number: ";
    std::cin >> a;

    std::cout << "Enter a number: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The square root of " << a << " and " << b << " is " << c;

    return 0;
}
