#include <iostream>
using namespace std;

// int sumNumbers(int a, int b) {
//     return a + b;
// }

// int sumNumbers(int a, int b, int c) {
//     return a + b + c;
// }

// int main(){
//     cout << sumNumbers(5, 10) << endl;
//     cout << sumNumbers(5, 10, 15) << endl;
// }

// int printDate(int day, int month, int year) {
//     switch (month) {
//         case 1:
//             cout << "The Date is: " << day << " January " << year << endl;
//             break;
//         case 2:
//             cout << "The Date is: " << day << " February " << year << endl;
//             break;
//         case 3:
//             cout << "The Date is: " << day << " March " << year << endl;
//             break;
//         case 4:
//             cout << "The Date is: " << day << " April " << year << endl;
//             break;
//         case 5:
//             cout << "The Date is: " << day << " May " << year << endl;
//             break;
//         case 6:
//             cout << "The Date is: " << day << " June " << year << endl;
//             break;
//         case 7:
//             cout << "The Date is: " << day << " July " << year << endl;
//             break;
//         case 8:
//             cout << "The Date is: " << day << " August " << year << endl;
//             break;
//         case 9:
//             cout << "The Date is: " << day << " September " << year << endl;
//             break;
//         case 10:
//             cout << "The Date is: " << day << " October"  <<" "<< year<<endl;
//             break;
//         case 11:
//             cout<< "The Date is: "<< day <<" November "<<year<<endl;
//             break;
//         case 12:
//             cout<< "The Date is: "<< day <<" December "<<year<<endl;
//             break;    
//     }
//     return 0;
// }

void printDate(int day, int month, int year){
    string monthNames[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << "The Date is: " << day << " " << monthNames[month - 1] << " " << year << endl;
}

void printDate(int day, string month, int year) {
    cout << "The Date is: " << day << " " << month << " " << year << endl;
}

int main() {
    printDate(15, 12, 2026);
    printDate(5, "July", 2025);
}