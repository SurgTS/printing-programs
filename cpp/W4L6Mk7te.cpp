#include <iostream>
int main() {
    const auto msgCnt = 113;
    const std::string msg = "W4L6Mk7te";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
