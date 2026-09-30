#include <iostream>
using namespace std;


string binerKeDesimal(string biner) {
    int desimal = 0;
    int pangkat = 0;

    for (int i = biner.length() - 1; i >= 0; i--) {
        if (biner[i] == '1') {
            desimal += (1 << pangkat);
        }
        pangkat++;
    }
    return to_string(desimal);
}

string desimalKeBiner(int desimal) {
    string biner = "";

    if (desimal == 0) {
        return "0";
    }
    while (desimal > 0) {
        biner = to_string(desimal % 2) + biner;
        desimal /= 2;
    }
    return biner;
}


int main() {
    bool konversiLagi = 1;
    while (konversiLagi == 1) {
        cout << "Pilih konversi: " << endl;
        cout << "1. Desimal ke Biner" << endl;
        cout << "2. Biner ke Desimal" << endl;
        cout << "Pilihan: ";
        int pilihan;
        cin >> pilihan;

        if (pilihan == 1) {
            int desimal;
            cout << "Masukkan bilangan desimal: ";
            cin >> desimal;
            cout << "Hasil konversi ke biner: " << desimalKeBiner(desimal) << endl;
        } else if (pilihan == 2) {
            string biner;
            cout << "Masukkan bilangan biner: ";
            cin >> biner;
            cout << "Hasil konversi ke desimal: " << binerKeDesimal(biner) << endl;
        } else {
            cout << "Pilihan tidak valid." << endl;
        }

        cout << "Apakah ingin melakukan konversi lagi? (0:no/1:yes): ";
        cin >> konversiLagi;
    }
    cout << "Terima kasih telah menggunakan program konversi bilangan." << endl;
}