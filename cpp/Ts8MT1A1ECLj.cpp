#include <iostream>
int main() {
    const auto msgCnt = 171;
    const std::string msg = "Ts8MT1A1ECLj";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
