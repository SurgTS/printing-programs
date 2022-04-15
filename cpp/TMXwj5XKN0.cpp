#include <iostream>
int main() {
    const auto msgCnt = 78;
    const std::string msg = "TMXwj5XKN0";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
