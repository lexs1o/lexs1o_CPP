#include <iostream>

using namespace std;

int sqsum(int a, int b){
    return((a+b)*(a+b));

}

int main()
{
    setlocale(0,"Russian");
    int a, b;
    cout << "������� ������ �����: " << endl;
    cin >> a;
    cout << "������� ������ �����: " << endl;
    cin >> b;

    cout << "������� ����� ����� �����: " << sqsum(a, b) <<endl;
    return 0;
}
