#include <iostream>
int main() {
    const auto msgCnt = 205;
    const std::string msg = "GSiqzuWlEKoW";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
