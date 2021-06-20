#include <iostream>
int main() {
    const auto msgCnt = 172;
    const std::string msg = "HU52qeZuS6nd";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
