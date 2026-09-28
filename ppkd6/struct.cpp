#include <iostream>
using namespace std;

struct Mahasiswa{
    int niu;
    string nama;
    int tahun;
    char gender;
};


int main(){
    int total;

    cout << "Masukan jumlah mahasiswa : ";
    cin >> total;

    Mahasiswa mhsTRPL[total];

    for (int i = 1; i <= total; i++){
        cout << "Masukan NIU mahasiswa ke-" << i << " : ";
        cin >> mhsTRPL[i].niu;
        cout << "Masukan nama mahasiswa ke-" << i << " : ";
        cin >> mhsTRPL[i].nama;
        cout << "Masukan tahun mahasiswa ke-" << i << " : ";
        cin >> mhsTRPL[i].tahun;
        cout << "Masukan gender mahasiswa ke-" << i << " : ";
        cin >> mhsTRPL[i].gender;
    }

    cout << "Data Mahasiswa TRPL : " << endl;
    cout << "==========================" << endl;
    cout << "NIU\tNama\tTahun\tGender" << endl;
    for (int i = 1; i <= total; i++){
        cout << mhsTRPL[i].niu << "\t";
        cout << mhsTRPL[i].nama << "\t";
        cout << mhsTRPL[i].tahun << "\t";
        cout << mhsTRPL[i].gender << endl;
    }
}