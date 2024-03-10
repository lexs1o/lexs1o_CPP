#include <iostream>

using namespace std;

int main()
{
    setlocale(0,"Russian");
    int number = 123;
    float number3 = 12.531;
    char symbol = 'f';
    bool logick = true;
    cout << "Целочисленный тип данных: " << number << endl;
    cout << "Вещественный тип данных: " << number3 << endl;
    cout << "Символьный тип данных: " << symbol << endl;
    cout << "Булевый тип данных: " << logick << endl;

    int a, b, pl, mn, um, de;
    cout << "Введите числа: ";
    cin >> a >> b;
    pl = a + b;
    mn = a - b;
    um = a * b;
    de = a / b;
    cout << "Операция сложения: " << pl << endl;
    cout << "Операция вычитания: " << mn << endl;
    cout << "Операция умножения: " << um << endl;
    cout << "Операция деления: " << de << endl;

    return 0;
}
