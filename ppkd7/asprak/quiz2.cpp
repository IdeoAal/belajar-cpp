#include <iostream>
using namespace std;

int DecToBin(int dec){
    int bin = 0;
    int place = 1;
    
    while (dec > 0) {
        int sisa = dec % 2;
        bin += sisa * place;
        dec /= 2;
        place *= 10;
    }
    
    return bin;
}

int BinToDec(int bin){
    int dec = 0;
    int base = 1;
    
    while (bin > 0) {
        int lastDigit = bin % 10;
        dec += lastDigit * base;
        bin /= 10;
        base *= 2;
    }
    
    return dec;
}

int main(){
    bool repeat;

    do{
        cout << "[1] Decimal to binary\n[2] Binary to decimal\n";

        int option, num;
        cout << "Input your option: ";
        cin >> option;

        if (option == 1){
            cout << "Input your decimal: ";
            cin >> num;

            cout << "Your binary is: " << DecToBin(num);
        }
        else if (option == 2){
            cout << "Input your binary: ";
            cin >> num;

            cout << "Your decimal is: " << BinToDec(num);
        }
        else {
            cout << "Unknown option.";
        }

        cout << "\nRepeat? [0:No / 1:Yes]: ";
        cin >> repeat;
        cout << endl;
    } while(repeat);

    cout << "Program ends.";
}