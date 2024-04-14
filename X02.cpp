#include <iostream>
#include <math.h>
using namespace std;
void solve_square_eq(float, float, float);

int main()
{
    setlocale(0,"Russian");
    float a, b, c;
    cout << "Введите коэффициенты для решения квадратного уравнения" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    solve_square_eq(a, b, c );
    return 0;
}

void solve_square_eq(float a, float b, float c){
    float Dis;
    float x1, x2;
    Dis = b*b - 4 * a * c;
    if(Dis > 0){
        x1 = (-b+sqrt(Dis))/2*a;
        x2 = (-b-sqrt(Dis))/2*a;
        cout << "Первый корень уравнения равен: " << x1 << endl;
        cout << "Второй корень равен: " << x2 << endl;
    }
    else if (Dis == 0){
        x1 = (-b+sqrt(Dis))/2*a;
        cout << "Корень уравнения равен: " << x1 << endl;
    }
    else{
        cout << "Корней нет" << endl;
    }
}
