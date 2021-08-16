#include <iostream>
int main() {
    const auto msgCnt = 236;
    const std::string msg = "D5uJNCzp4fq87pM65";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
