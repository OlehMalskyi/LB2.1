// Lab_2.1.cpp
// <��������� ����>
// ����������� ������ � 2.1.
// ˳��� ��������.
// ������ 14

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a; // ������� ��������
    double z1; // ��������� ���������� 1-�� ������
    double z2; // ��������� ���������� 2-�� ������
    
    cout << "a = ";
    cin >> a;

    // ���������� z1 �� ������ ��������
    z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
    // ���������� z2 �� ������ ��������
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