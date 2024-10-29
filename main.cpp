#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // this removes need to declare namespace
    using std::string;
    using std::cout;

    cout << first::x + second::x << std::endl;

    return 0;
}
