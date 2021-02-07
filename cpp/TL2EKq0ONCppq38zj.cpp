#include <iostream>
int main() {
    const auto msgCnt = 96;
    const std::string msg = "TL2EKq0ONCppq38zj";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
