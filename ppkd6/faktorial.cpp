#include <iostream>
using namespace std;

// Kita buat sebuah fungsi untuk menghitung faktorial dari sebuah angka
int fact(int number){

    // kita buat variabel hasil dengan tipe int untuk menyimpan hasil faktorial
    // kita beri nilai defaut 1, karena faktorial dari 0 dan 1 adalah 1
    // jadi misal angkanya dimasukan 0 itu gak masuk perulangan, tapi hasilnya tetap 1
    int hasil = 1;

    /* 
    perulangan untuk menghitung faktorial dari angka yang diberikan
     perulangan dimulai dari 1 sampai angka yang diberikan,
     jadi nilai awal i adalah 1, dan akan terus bertambah sampai batasnya
     yaitu batasnya angka yang diberikan, lalu i akan bertambah 1 setiap perulangan.
    karena faktorial dari sebuah angka adalah hasil perkalian 
     dari semua angka dari 1 berurutan sampai angka itu sendiri
      setiap perulangan, hasil akan menyimpan hasil perkalian dari
    hasil sebelumnya dengan angka saat ini
    */
    for (int i = 1; i <= number; i++){

        /*didalam perulangan kita lakukan perkalian hasil dengan angka saat ini, 
        dan menyimpan hasilnya kembali ke variabel hasil
        */
        hasil *= i ;
    }
    /*
    maksud dari return hasil ini jadi hasil dari perulangan yang sudah selesai 
     dilakukan akan dikembalikan ke fungsi fact yang memanggilnya,
    */
    return hasil;
}

int main(){
    // disini kita bikin variabel result untuk menyimpan hasil dari faktorial 5
    // kita tidak bisa pakai variabel hasil karena itu hanya ada di dalam fungsi fact, 
    // jadi kita harus menyimpan hasilnya ke variabel result, yang baru ini ada di dalam fungsi main
    int result = fact(5) + fact(4);
    // kita tampilkan hasil dari faktorial 5 + faktorial 4 = variabel result
    cout << "The result of fact(5) + fact(4) is: " << result << endl;
}