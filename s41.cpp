#include <iostream>

using namespace std;

int sqsum(int a, int b){
    return((a+b)*(a+b));

}

int main()
{
    setlocale(0,"Russian");
    int a, b;
    cout << "¬ведите первое число: " << endl;
    cin >> a;
    cout << "¬ведите второе число: " << endl;
    cin >> b;

    cout << " вадрат суммы чисел равен: " << sqsum(a, b) <<endl;
    return 0;
}
