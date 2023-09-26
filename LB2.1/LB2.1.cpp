// Lab_2.1.cpp
// <Мальський Олег>
// Лабораторна робота № 2.1.
// Лінійні програми.
// Варіант 14

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу
    
    cout << "a = ";
    cin >> a;

    // Обчислення z1 за першою формулою
    z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
    // Обчислення z2 за другою формулою
    double radians = 2 * a;
    double tan_2a = tan(radians);
    double sec_2a = 1.0 / cos(radians);
    z2 = tan_2a + sec_2a;

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}