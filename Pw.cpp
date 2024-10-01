#include <iostream>

int main() {
    int x, y, z;

    // Введення чисел x, y, z
    std::cout << "Введіть число x: ";
    std::cin >> x;
    std::cout << "Введіть число y: ";
    std::cin >> y;
    std::cout << "Введіть число z: ";
    std::cin >> z;

    // Обчислення результату та виведення
    std::cout << "Результат побітового AND між x і (y XOR z): " << (x & (y ^ z)) << std::endl;

    return 0;
}
