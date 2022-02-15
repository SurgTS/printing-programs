#include <iostream>
int main() {
    const auto msgCnt = 148;
    const std::string msg = "SPRUTcJg76f4";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
