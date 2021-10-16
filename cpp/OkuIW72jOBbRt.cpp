#include <iostream>
int main() {
    const auto msgCnt = 35;
    const std::string msg = "OkuIW72jOBbRt";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
