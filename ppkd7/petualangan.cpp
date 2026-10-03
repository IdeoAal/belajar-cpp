#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// disini kami menyimpan untuk status pemain, seperti nama, nyawa, dan poin
struct Player{
    string nama;
    int nyawa;
    int poin;
};

// fungsi void ini digunakan untuk menampilkan status pemain
void PlayerStatus(Player player){
    cout << "Sisa Nyawa: " << player.nyawa << endl;
    cout << "Poin Terkumpul: " << player.poin << endl;
}

// fungsi void untuk dipanggil ketika permainan dimulai, berisi penjelasan singkat tentang permainan
void Welcome(){
    cout << "======\t Selamat datang di game petualangan!\t ======" << endl;
    cout << "Kamu akan memulai petualanganmu dengan 3 nyawa dan 0 poin." << endl;
    cout << "Setiap perjalanan yang berhasil, kamu akan mendapatkan 10 poin." << endl;
    cout << "Jika kamu bertemu monster, kamu akan kehilangan 1 nyawa." << endl;
    cout << "Jika nyawamu habis, permainan berakhir." << endl;
}

int main(){
    // dari struct Player, kita membuat objek player1 untuk menyimpan data pemain
    Player player1;
    player1.nyawa = 3;
    player1.poin = 0;

    // untuk awal game kita panggil fungsi welcome yang berisi penjelasan singkat tentang permainan
    Welcome();

    // disini kita meminta pemain untuk memasukkan nama mereka
    cout << "Masukkan nama pemain: ";
    // nama pemain akan disimpan di player1.nama yang tadi dibuat dari struct player
    cin >> player1.nama;

    srand(time(0));

    /*disini kita meminta pemain untuk memutuskan apakah mereka ingin bermain lagi atau tidak
    akan tetapi agar saat pertamakali dimulai langsung bisa main, 
    kita set 'y' agas masuk ke loop whilenya langsung
    */
    char mainLagi = 'y';

    // while disini menggunakan mainLagi sebagai kondisi, 
    // jika pemain memasukan 'y' maka akan masuk ke loop while dan memulai permainan baru

    while (mainLagi == 'y') {
        // disini kita menampilkan pesan bahwa permainan baru dimulai,
        // dan mengembalikan nyawa dan poin pemain ke kondisi awal
        cout << "\nMulai permainan baru!" << endl;
        player1.nyawa = 3;
        player1.poin = 0;

        // kita buat variabel untuk menunjukan ada di level berapa
        // variabel ini dimulai dari 0
        int langkah = 0;

        // disini kita membuat loop while yang akan terus berjalan selama nyawa pemain lebih dari 0
        while (player1.nyawa > 0){
            // disini kita minta pemain untuk memilih jalan yang akan mereka ambil,
            // dan menampilkan pilihan jalan yang tersedia
            cout << "Pilih Jalanmu" << endl;
            cout << "1. Kanan" << endl;
            cout << "2. Kiri" << endl;

            int jalan;
            cout << "Pilihan : ";
            // pilihan yang dimasukan pemain akan disimpan di variabel jalan
            cin >> jalan;

            // setiap memilih jalan, maka langkah akan bertambah 1, 
            // untuk kita menampilkan level berapa pemain berada
            langkah++;

            // rand() menghasilkan angka random.
            // % 100 membuat hasil menjadi 0-99.
            // + 1 membuat hasil menjadi 1-100.
            // Jadi random bisa menghasilkan: 1, 2, 3, ..., 98, 99, 100
            int random = rand() % 100 + 1;

            // nah jika angka random yang muncul 30 kebawah maka masuk ke if
            if (random <= 30) {
                //system("cls") digunakan untuk membersihkan layar console pada Windows.
                system("cls");

                // disini kita menampilkan level berapa pemain berada, 
                // dan menampilkan pesan bahwa mereka bertemu monster
                cout << "Level-" << langkah << endl;
                cout << "Kamu bertemu monster! Kamu kehilangan 1 nyawa." << endl;

                // karena bertemu monster maka nyawa berkurang 1
                player1.nyawa -= 1;

                // kita panggil fungsi playerStatus untuk menampilkan info
                PlayerStatus(player1);
            } 
            else {
                //system("cls") digunakan untuk membersihkan layar console pada Windows.
                system("cls");

                // disini kita menampilkan level berapa pemain berada, 
                // dan menampilkan pesan bahwa mereka aman
                cout << "Level-" << langkah << endl;
                cout << "Perjalananmu aman" << endl;

                // karena tidak ketemu monster maka poin bertambah 10
                player1.poin += 10;

                // kita panggil fungsi playerStatus untuk menampilkan info
                PlayerStatus(player1);
            }
        }

        //saat sudah habis nyawa mereka, maka akan keluar dari loop while 
        // dan menampilkan pesan bahwa permainan berakhir
        cout << "\nPermainan berakhir!" << endl;
        cout << "Nama Pemain: " << player1.nama << endl;
        cout << "Poin Akhir: " << player1.poin << endl;

        // kita tanya mau main lagi atau tidak
        // jika masukan 'y' maka akan masuk ke loop while dan memulai permainan baru
        cout << "\nMain lagi? (y/n): ";
        cin >> mainLagi;
    }

    // disini setelah pemain memasukan n, maka akan keluar dari loop while
    // dan menampilkan pesan terima kasih sudah bermain
    cout << "\nTerima kasih sudah bermain!" << endl;

    return 0;
}