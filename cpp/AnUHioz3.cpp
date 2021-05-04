#include <iostream>
int main() {
    const auto msgCnt = 146;
    const std::string msg = "AnUHioz3";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
