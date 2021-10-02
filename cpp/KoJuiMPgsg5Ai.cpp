#include <iostream>
int main() {
    const auto msgCnt = 31;
    const std::string msg = "KoJuiMPgsg5Ai";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
