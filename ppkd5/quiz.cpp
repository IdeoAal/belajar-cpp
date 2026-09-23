#include <iostream>
using namespace std;

int main(){
    // kita deklarasikan array seatMap bertipe boolean untuk menampung ketersediaan kursi
    bool seatMap [5][6] ;

    // perulangan disini untuk memberi nilai true untuk semua kursi
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            seatMap[i][j] = true;
        }
    }

    // kita deklarasikan variabel selecSeat untuk parameter while
    bool selecSeat= true;

    while (selecSeat){
        cout << "Welcome to the movie booking system!" << endl;
        cout << "\t0\t1\t2\t3\t4\t5" << endl;
        /* 
        perulangan untuk menampilkan kursi yang tersedia dengan tanda _, 
        dengan melihat apakah seatMap[i][j] bernilai true atau false.
        */
        for (int i = 0; i < 5; i++){
            cout << i << "\t";
            for (int j = 0; j < 6; j++){

                if (seatMap[i][j] == true){
                cout << "_" << "\t";
                } else {
                    cout << "V" << "\t";
                }
            }
            cout << endl;
        }

        // kita minta user untuk memasukkan nomor baris dan kolom kursi yang ingin dibeli
        cout << "Selec row number: ";
        int row;
        cin >> row;

        cout << "Select column number: ";
        int col;
        cin >> col;

        /*
        kita cek jika yang dipesan sudah false maka gabisa
        kalo true maka bisa dipesan dan status kursi yang dipesan awalnya true jadi false
        */
        if (seatMap[row][col] == false){
            cout << "Seat [" << row << " " << col << "] is already booked!" << endl;
        }else {
            seatMap[row][col] = false;
            cout << "You have purchased seat [" << row << " " << col << "]" << endl;
        }
        
        // kita tanya apakah user mau beli lagi
        // jika 1 maka perulangan while akan diulang karena true, 
        // jika 0 maka perulangan while akan berhenti
        cout <<"Select seat again? (1=yes/0=no): ";
        cin >> selecSeat;
    }
    // kita tampilkan pesan bahwa kasir sudah ditutup dan film akan segera dimulai
    cout << "Cashier closed, movie will start soon!" << endl;
}