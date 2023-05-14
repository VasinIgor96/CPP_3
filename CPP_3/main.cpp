#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double v, t, a;

    cout << "Введіть швидкість (v): ";
    cin >> v;

    cout << "Введіть час (t): ";
    cin >> t;

    cout << "Введіть прискорення (a): ";
    cin >> a;

    double distance = v * t + (a * t * t) / 2;

    cout << "Пройдена відстань: " << distance << endl;

    return 0;
}
