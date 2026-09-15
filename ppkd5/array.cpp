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
    string member[5] = {"Ani", "Budi", "Wati", "Iwan", "Santi"};
    bool isMember = 0;
    int memberID;
    string name;
    int entranceFee;


    cout << "Welcome to the book store!" << endl;
    cout << "Are you a member? (1=yes/0=no): ";
    cin >> isMember;
    if (isMember){
        cout << "Enter Member ID (0-4): ";
        cin >> memberID;

        name = member[memberID];
        entranceFee = 0;
    } else {
        entranceFee = 1000;
        name = "guest";
    }
    cout << "Welcome, " << name << "! Your entrance fee is: " << entranceFee << " Rupiah" << endl;

    string title [5] = {"Harry Potter", "Algorithm", "Calculus", "Sherlock Holmes", "Supernova"};
    string price [5] = {"250000", "85000", "130000", "270000", "180000"};
    bool available [5] = {true, true, false, true, true};
}