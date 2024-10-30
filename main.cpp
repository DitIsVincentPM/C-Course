#include <iostream>

class Human {
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat() {
            std::cout << "This person is eating" << '\n';
        }
    void drink() {
            std::cout << "This person is drink" << '\n';
        }
};

int main() {

    Human human;

    human.name = "Dirk";
    human.occupation = "Occupation";
    human.age = 18;

    human.eat();
    human.drink();

    return 0;
}