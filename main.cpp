#include <iostream>
#include <cmath>

int main() {
    char op;
    double num1, num2, result;

    std::cout<<"************ Calculator ************\n";
    std::cout<<"1. Addition\n";
    std::cout<<"2. Subtraction\n";
    std::cout<<"3. Multiplication\n";
    std::cout<<"4. Division\n";
    std::cout<<"************ Calculator ************\n";

    std::cin >> op;

    std::cout<<"What's the first number: \n";
    std::cin >> num1;
    std::cout<<"What's the Secondd number: \n";
    std::cin >> num2;
4
    std::cout<<"************ Calculator ************\n";
    switch (op) {
        case '1':
            result = num1 + num2;
            break;
        case '2':
            result = num1 - num2;
            break;
        case '3':
            result = num1 * num2;
            break;
        case '4':
            result = num1 / num2;
            break;
    }
    std::cout << "The result is: " << result << std::endl;
    std::cout<<"************ Calculator ************\n";

    return 0;
}
