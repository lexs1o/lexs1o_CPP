#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double area(int n, int a){
    return((n*a*a)/(4*tan(M_PI/n)));
}

int main()
{
    setlocale(0,"Russian");
    double n, a;
    cout << "������� ���-�� ������ ��������������: " << endl;
    cin >> n;
    cout << "������� ������� ��������������: " << endl;
    cin >> a;

    cout << "������� �����: " << area(n, a) << endl;
    return 0;
}
