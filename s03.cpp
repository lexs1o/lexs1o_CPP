#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    for(int i = 1; i < 100; i++){
        if (i % 3 == 0){
            cout << "Число делится на 3: " << i << endl;
        }
    }
}
