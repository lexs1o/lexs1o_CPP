#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"Russian");
    int number = 123;
    float number3 = 12.531;
    char symbol = 'f';
    bool logick = true;
    cout << "������������� ��� ������: " << number << endl;
    cout << "������������ ��� ������: " << number3 << endl;
    cout << "���������� ��� ������: " << symbol << endl;
    cout << "������� ��� ������: " << logick << endl;

    int a, b, pl, mn, um, de;
    cout << "������� �����: ";
    cin >> a >> b;
    pl = a + b;
    mn = a - b;
    um = a * b;
    de = a / b;
    cout << "�������� ��������: " << pl << endl;
    cout << "�������� ���������: " << mn << endl;
    cout << "�������� ���������: " << um << endl;
    cout << "�������� �������: " << de << endl;

    return 0;
}
