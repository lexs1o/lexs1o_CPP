#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    int num = 0, sum = 0;
    while(num < 1000){
        num += 4;
        if(num % 7 == 0){
            sum += num;
        }
        cout << " num " << num << endl;
        cout << " sum " << sum << endl;
        }


    return 0;
}
