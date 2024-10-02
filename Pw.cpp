#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int x, y, z;

    //Завдання: Виконати побітове "AND" над двома числами: x і результатом побітового "XOR" числа y з числом z.
    cout << "Введіть число x: ";
    cin >> x;
    cout << "Введіть число y: ";
    cin >> y;
    cout << "Введіть число z: ";
     cin >> z;

    
    cout << "Результат побітового AND між x і (y XOR z): " << (x & (y ^ z)) << endl;

    return 0;
}
