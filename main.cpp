#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int number{1243};
    bool yes{true};
    float number1{13.53};
    char example{'F'};
    cout << "������������� ��� ������: "<< number << '\n';
    cout << "���������� ��� ������: "<< yes<< '\n';
    cout << "����� � ��������� ������: "<< number1 << '\n';
    cout << "���������� ��� ������: "<< example<< '\n';
    return 0;
}
