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
    cout << "����� �����: " << volume << endl;
    cout << "��� ������: " << used << endl;
}
Bucket::~Bucket(){cout << "����� ���������� O_O" << endl;}
void Bucket::flush_bucket(){
    if(used == 0){
        cout << "����� ��� ������, ������ ����� ������������!" << endl;
    }
    else{
        used = 0;
        cout << "����� ������" << endl;
    }
}
void Bucket::fill_bucket(int v){
    int rest, full;
    rest = volume - rest;
    full = v + used;
    if(full > volume){
        cout << "�� ��������� ����� ���������, �� ��������: " << full - volume << " ������ ����" <<endl;
    }
    else{
        cout << "����� ��������� ��: " << full << " ������ ����" << endl;
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
