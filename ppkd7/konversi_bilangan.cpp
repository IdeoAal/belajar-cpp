#include <iostream>
using namespace std;


int binerKeDesimal(int biner) {
    int desimal = 0;
    int pangkat = 1;
    while (biner > 0) {
        int digit = biner % 10;
        desimal = desimal + (digit * pangkat);
        pangkat = pangkat * 2;
        biner = biner / 10;
    }
    return desimal;
}

void desimalKeBiner(int desimal) {
    int biner[32];
    int i = 0;
    if (desimal == 0) {
        cout << "Hasil biner: 0";
        return;
    }
    while (desimal > 0) {
        biner[i] = desimal % 2;
        desimal = desimal / 2;
        i++;
    }
    cout << "Hasil biner: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << biner[j];
    }
}

void menu() {
    cout << "Pilih Menu" << endl;
    cout << "1. Desimal ke Biner" << endl;
    cout << "2. Biner ke Desimal" << endl;
    cout << "0. Keluar" << endl;
}

int main() {
    int pilihan;
    int ulang = 1;

    while (ulang == 1) {
        menu();

        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int desimal;
            cout << "Masukkan desimal: ";
            cin >> desimal;
            desimalKeBiner(desimal);
            cout << endl;
        }

        else if (pilihan == 2) {
            int biner;
            cout << "Masukkan biner: ";
            cin >> biner;
            cout << "Hasil desimal: ";
            cout << binerKeDesimal(biner) << endl;
        }
        else if (pilihan == 0) {
            cout << "Program selesai." << endl;
            break;
        }
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }
        cout << "Konversi lagi? (1 = Ya, 0 = Tidak): ";
        cin >> ulang;
    }
    cout << "Program selesai." << endl;

    return 0;
}