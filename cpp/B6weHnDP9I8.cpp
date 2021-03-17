#include <iostream>
int main() {
    const auto msgCnt = 211;
    const std::string msg = "B6weHnDP9I8";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
