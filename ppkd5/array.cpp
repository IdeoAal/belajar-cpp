#include <iostream>
using namespace std;

int main(){
    // Activity 1
    // string member[3] = {"Ani", "Budi", "Wati"};
    // for (string m: member){
    //     cout << m << endl;
    // }

    // Activity 2
    // int number[5] = {10, 20, 30, 40, 50};
    // int sum = 0;

    // // for (int i = 0; i <= 4; i++){
    // //     sum += number[i];
    // // }
    // // cout << "Sum: " << sum << endl;
    // for (int n: number){
    //     sum += n;
    // }
    // cout << "Sum: " << sum << endl;

    // Activity 3 & 4
    // kita deklarasikan array member bertipe string untuk menampung nama-nama member
    string member[5] = {"Ani", "Budi", "Wati", "Iwan", "Santi"};

    // kita deklarasikan variabel isMember bertipe boolean untuk menampung apakah user adalah member atau bukan
    bool isMember = false;

    // kita deklarasikan variabel memberID dan entranceFee bertipe integer untuk menampung ID member
    int memberID, entranceFee;

    // kita deklarasikan variabel name bertipe string untuk menampung nama member atau
    string name;
    
    // kita tampilkan pesan selamat datang dan menanyakan apakah user adalah member atau bukan
    cout << "Welcome to the book store!" << endl;
    cout << "Are you a member? (1=yes/0=no): ";
    // angka 1 atau 0 yang user masukkan akan kita simpan di variabel isMember
    cin >> isMember;

    // kita cek apakah user adalah member atau bukan
    if (isMember){

        // jika user adalah member, kita minta ID member dari user
        cout << "Enter Member ID (1-5): ";

        // angka yang user masukkan akan kita simpan di variabel memberID
        cin >> memberID;

        // kita kurangi ID member dengan 1 karena array dimulai dari indeks 0
        memberID -= 1;

        // kita ambil nama member dari array member berdasarkan ID yang dimasukkan user dan sudh dikurangi 1
        name = member[memberID];

        // jika user adalah member, maka biaya masuk adalah 0
        entranceFee = 0;

    // jika user bukan member, maka kita set nama menjadi "guest" dan biaya masuk menjadi 1000
    } else {
        entranceFee = 1000;
        name = "guest";
    }

    // kita tampilkan pesan selamat datang dan biaya masuk yang harus dibayar user
    cout << "Welcome, " << name << "! Your entrance fee is: " << entranceFee << " Rupiah" << endl;

    // kita deklarasikan array title bertipe string untuk menampung judul-judul buku
    string title [5] = {"Harry Potter", "Algorithm", "Calculus", "Sherlock Holmes", "Supernova"};

    // kita deklarasikan array price bertipe integer untuk menampung harga-harga buku
    int price [5] = {250000, 85000, 130000, 270000, 180000};

    // kita deklarasikan array available bertipe boolean untuk menampung ketersediaan buku
    bool available [5] = {true, true, false, true, true};

    // kita deklarasikan variabel bookID bertipe integer untuk menampung ID buku yang dipilih user
    int bookID;

    // kita deklarasikan variabel total bertipe integer untuk menampung total harga buku yang dibeli
    int total;

    // kita tampilkan daftar buku yang tersedia
    cout << "Below are available books" << endl;

    /*
    kita gunakan perulangan for dengan variabel bookID sebagai indeks array.
    perulangan akan dimulai dari 0 hingga 4, sesaui index array buku yang tersedia.
    */
    for (bookID= 0; bookID <=4 ; bookID++){
        /*
        setiap perulangan akan diawali dengan mengecek apakah ketersediaan buku dengan menggunakan array available.
        jika ada array available[bookID] yang bernilai false, maka continue;
        dan perulangan akan dilanjutkan ke ID buku berikutnya
        */
        if (available[bookID] == false)
            continue;

        // jika buku tersedia, maka kita tampilkan ID buku, judul buku, dan harga buku
        cout << "Book ID: " << bookID << ", Title: " << title[bookID] << ", Price: " << price[bookID] << endl;
    }

    // kita minta user untuk memasukkan ID buku yang ingin dibeli
    cout << "Enter Book ID to buy: ";

    // angka yang user masukkan akan kita simpan di variabel bookID sebagai buku yang dibeli user
    cin >> bookID;

    // kita hitung total harga buku yang dibeli user dengan menambahkan biaya masuk dan harga buku
    total = entranceFee + price[bookID];

    // kita tampilkan judul buku yang dibeli user dan total harga yang harus dibayar user
    cout << "Your selected book is " << title[bookID] << ", with total price of " << total << " Rupiah" << endl;

    // Activity 5 
    string letters [2] [4] ={
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            cout << letters[i][j] << "\t";
        }
        cout << endl;
    }

}