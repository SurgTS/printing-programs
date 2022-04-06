#include <iostream>
int main() {
    const auto msgCnt = 97;
    const std::string msg = "K13783jf9MjbwKrP";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
