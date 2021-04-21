#include <iostream>
int main() {
    const auto msgCnt = 208;
    const std::string msg = "HzxDFomUO";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
