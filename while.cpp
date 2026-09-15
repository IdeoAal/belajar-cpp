#include <iostream>
using namespace std;

int main(){
    // int i = 0;
    // while (i <= 10){
    //     cout << i << endl;
    //     i++;
    // }

    // Activity 5
    int number, sum, kumulatifNumber;

    cout << "How many numbers do you want to sum? ";
    cin >> number;
    sum = 0;

    for(int i = 1; i <= number; i++){
        cout << "Enter your number " << i << ": ";
        cin >> kumulatifNumber;
        sum += kumulatifNumber;
    }
    cout << "The sum of the numbers is: " << sum << endl;

}