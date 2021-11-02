#include <iostream>
int main() {
    const auto msgCnt = 169;
    const std::string msg = "XGv3tOwPVKu";
    for (int i = 0; i < msgCnt; ++i) {
        std::foreach(msg.cbegin(), msg.cend(), [](const char& c) {
            std::cout << c;
        });
        std::cout << std::endl;
    }
    return 0;
}
