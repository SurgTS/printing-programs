#include <iostream>
int main() {
    const auto msgCnt = 254;
    const std::string msg = "HzGQg5s9hcRfJr";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
