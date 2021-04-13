#include <iostream>
int main() {
    const auto msgCnt = 108;
    const std::string msg = "Cd6RG6HK46VaYAxgS";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
