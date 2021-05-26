#include <iostream>
int main() {
    const auto msgCnt = 225;
    const std::string msg = "Go8J12uCo8dUGNW";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
