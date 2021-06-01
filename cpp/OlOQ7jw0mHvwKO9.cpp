#include <iostream>
int main() {
    const auto msgCnt = 218;
    const std::string msg = "OlOQ7jw0mHvwKO9";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
