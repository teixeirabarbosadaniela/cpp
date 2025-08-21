#include <iostream>
#include <locale>

int main() {
    std::locale::global(std::locale::classic());
    std::cout << "Ola, MSYS2 e VS Code!" << std::endl;
    return 0;
}


