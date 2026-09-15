#include <iostream>
using namespace std;

int main(){
    // int x = 5;
    // cout << x << endl;
    // x++;
    // cout << x << endl;
    // cout << (x += 1) << endl;
    // cout << (x += 2) << endl;
    // cout << (x *= 3) << endl;
    // cout << (x /= 9) << endl;

    // for (int i = 3; i <= 10; i++)
    // {
    //     cout << i << endl;
    // }
    

    //Activity 2
    // int num1, num2;
    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter second number: ";
    // cin >> num2;
    // for (int i = num1; i < num2; i++)
    // {
    //     cout << i << endl;
    // }


    // Activity 3
    // int num1, num2;
    // cout << "Enter first number: ";
    // cin >> num1;
    // cout << "Enter second number: ";
    // cin >> num2;
    // for (int i = num1; i < num2; i++)
    // {
    //     if (i % 2 == 0)
    //         cout << i << endl;
    // }

    // Activity 4
    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    sum = 0;
    for (int i = num1 + 1; i < num2; i++){
        if (i % 2 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
}