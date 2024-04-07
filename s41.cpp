#include <iostream>

using namespace std;

int sqsum(int a, int b){
    return((a+b)*(a+b));

}

int main()
{
    setlocale(0,"Russian");
    int a, b;
    cout << "Введите первое число: " << endl;
    cin >> a;
    cout << "Введите второе число: " << endl;
    cin >> b;

    cout << "Квадрат суммы чисел равен: " << sqsum(a, b) <<endl;
    return 0;
}
