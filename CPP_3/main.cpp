#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double pi = 3.14;
    double circumference;
    cout << "Введіть довжину окружності: ";
    cin >> circumference;

    double radius = circumference / (2 * pi);
    double area = pi * radius * radius;

    cout << "Площа кола: " << area << endl;

    return 0;
}
