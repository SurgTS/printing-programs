#include <iostream>
int main() {
    const auto msgCnt = 69;
    const std::string msg = "QLEC731G3Z";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
