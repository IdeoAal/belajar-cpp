#include <iostream>
using namespace std;

int pangkat (int a, int b){
    int hasil = 1;
    if (b > 0){
        return hasil = a * pangkat(a, b - 1);
    } else {
        return hasil;
    }
}

int main (){
    cout <<"masukan nilai a : ";
    int a;
    cin >> a;
    cout <<"masukan nilai b : ";
    int b;
    cin >> b;
    cout << "hasil dari " << a << " pangkat " << b << " adalah : " << pangkat(a, b) << endl;
}