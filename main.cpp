#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> Vector2;

int main() {
    Vector2 v;

    v.push_back(std::make_pair("John", 20));
    std::cout << v[0].first << " " << v[0].second << std::endl;
    return 0;
}
