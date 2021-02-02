#include <iostream>
int main() {
    const auto msgCnt = 184;
    const std::string msg = "Fv4rG9T5VD7M06GpFz";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
