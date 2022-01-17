#include <iostream>
int main() {
    const auto msgCnt = 94;
    const std::string msg = "BFMQ9IIg46XVR";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
