//Project Euler, problem #1.
//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
//The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.


#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    //for 5.
    int f = 1000/5;

    //for 3.
    int t = 1000/3;

    for (int i = 0; i <= t; i++){
        if ((3*i)%5!=0){
        cout << 3*i << endl;
        sum = sum + (3*i);
        }
    }

   for (int i = 0; i < f; i++){
        cout << 5*i << endl;
        sum = sum +(5*i);
    }

    cout << "SUM: " << sum << endl;


    return 0;
}
