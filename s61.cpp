#include <iostream>

using namespace std;

class Bucket{
private:
    int volume, used;
public:
    Bucket(int vol, int u);
    ~Bucket();
    void flush_bucket();
    void fill_bucket(int v);
};
Bucket::Bucket(int vol, int u){
    volume = 8; used = 3;
    volume = vol; used = u;
    cout << "Объём ведра: " << volume << endl;
    cout << "Уже занято: " << used << endl;
}
Bucket::~Bucket(){cout << "Ведро испарилось O_O" << endl;}
void Bucket::flush_bucket(){
    if(used == 0){
        cout << "Ведро уже пустое, можете смело использовать!" << endl;
    }
    else{
        used = 0;
        cout << "Ведро пустое" << endl;
    }
}
void Bucket::fill_bucket(int v){
    int rest, full;
    rest = volume - rest;
    full = v + used;
    if(full > volume){
        cout << "Вы заполнили ведро полностью, но вылилось: " << full - volume << " литров воды" <<endl;
    }
    else{
        cout << "Ведро заполнено на: " << full << " литров воды" << endl;
    }
}


int main()
{
    setlocale(0, "Russian");
    int v;
    Bucket old_bucket(10, 3);
    //old_bucket.flush_bucket();
    old_bucket.fill_bucket(10);

    return 0;
}
