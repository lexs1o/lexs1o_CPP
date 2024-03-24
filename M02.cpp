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
    cout << "Введите кол-во сторон многоугольника: " << endl;
    cin >> n;
    cout << "Введите сторону многоугольника: " << endl;
    cin >> a;

    cout << "Площадь равна: " << area(n, a) << endl;
    return 0;
}
