#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(0, "Russian");
    ofstream file;
    file.open("output.txt");
    int A,B;
    cout << "������� ����� A, B (B > A) " << endl;
    cin >> A >> B;
    for(int i = A; i <= B; ++i) {
        cout << i * 3 << endl;
        file << i * 3 << "" << endl;

    }
    file.close();
    cout << "���� ��� �������" << endl;

    return 0;
}
