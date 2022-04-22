#include <iostream>
int main() {
    const auto msgCnt = 245;
    const std::string msg = "UZCNUzndtWAw2l";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
