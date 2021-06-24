#include <iostream>
int main() {
    const auto msgCnt = 114;
    const std::string msg = "WOLU2Lwq8l";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
