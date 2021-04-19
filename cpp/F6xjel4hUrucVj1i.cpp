#include <iostream>
int main() {
    const auto msgCnt = 122;
    const std::string msg = "F6xjel4hUrucVj1i";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
