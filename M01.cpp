#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0, "Russian");

    const int msize = 11;
    int arr[msize];
    for(int j = 1; j < msize; j++)
    {
        for(int i = 1; i < msize; i++)
        {
            arr[i] = i * j;
            cout << setw(4) << arr[i];
        }
        cout << endl;
    }

    return 0;
}
