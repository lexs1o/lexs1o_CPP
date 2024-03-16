#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int number1, number2, res, ostatok;
    cin >> number1 >> number2;
    res = number1 / number2;
    ostatok = number1 % number2;

    cout << "Остаток: "<< ostatok << '\n';
    cout << "Целочисленное деление: "<< res << '\n';
    return 0;
}
