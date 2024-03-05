#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int number{1243};
    bool yes{true};
    float number1{13.53};
    char example{'F'};
    cout << "Целочисленный тип данных: "<< number << '\n';
    cout << "Логический тип данных: "<< yes<< '\n';
    cout << "Число с плавающей точкой: "<< number1 << '\n';
    cout << "Символьный тип данных: "<< example<< '\n';
    return 0;
}
