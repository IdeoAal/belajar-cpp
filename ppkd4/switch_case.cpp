#include <iostream>

using namespace std;

int main(){
    // bool isMember;
    // string namaMember;

    // int memberID;
    // double diskon;

    // cout << "Welcome to the Bookstore!" << endl;
    // cout << "apakah anda seorang member? (1 untuk ya, 0 untuk tidak): ";
    // cin >> isMember;

    // if (isMember == true){
    //     diskon = 0.85;
    //     cout << "Enter your member ID: ";
    //     cin >> memberID;
    //     switch (memberID)
    //     {
    //     case 1:
    //         namaMember = "Ani";
    //         cout << "Welcome, " << namaMember << "!" << endl;
    //         break;
    //     case 2:
    //         namaMember = "Budi";
    //         cout << "Welcome, " << namaMember << "!" << endl;
    //         break;
    //     case 3:
    //         namaMember = "Wati";
    //         cout << "Welcome, " << namaMember << "!" << endl;
    //         break;
    //     }
    // } 
    // else {
    //     diskon = 0.95;
    //     namaMember = "Guest";
    //     cout << "Welcome, " << namaMember << "!" << endl;
    // }


    // int dayID;
    // string day;
    // cout << "masukan hari (1-7): ";
    // cin >> dayID;

    // switch (dayID) {
    //     case 1:
    //         day = "Monday";
    //         break;
    //     case 2:
    //         day = "Tuesday";
    //         break;
    //     case 3:
    //         day = "Wednesday";
    //         break;
    //     case 4:
    //         day = "Thursday";
    //         break;
    //     case 5:
    //         day = "Friday";
    //         break;
    //     case 6:
    //         day = "Saturday";
    //         break;
    //     case 7:
    //         day = "Sunday";
    //         break;
    // }

    // cout << "Today is " << day;


    // Program kalkulator
    double num1, num2, hasil;
    char aritmatika;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> aritmatika;
    cout << "Enter second number: ";
    cin >> num2;

    switch (aritmatika) {
        case '+':
            hasil = num1 + num2;
            break;
        case '-':
            hasil = num1 - num2;
            break;
        case '*':
            hasil = num1 * num2;
            break;
        case '/':
            hasil = num1 / num2;
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << hasil << endl;

    return 0;
}