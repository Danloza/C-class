// Your Name: Daniel Loza
// Date:3/7/17
// Class C++, engr 1540
// Assignment Name Assignment 10
//Problem Pennies for Pay
// =========================================

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{

  //input days worked
  double dayPay = 0.5, totalPay, days, loopCounter =0;

   cout << "This program will calculate the monthly earnings of an employee." << endl;
   cout << "How many days did this person work?" << endl ;
    cin >> days;

     //validates input as valid
    while (days < 1 || days > 31)
    {
    cout << "You entered an invalid value. Days worked must be between 1 and 31." << endl;
   cout << "How many days did this person work?" << endl ;
    cin >> days;
    }

    //output header
    cout << "Day" << setw(25) << "Dollars earned" << endl;
    cout << "-------------------------------------" << endl;

    //calculate daily pay and running total.
    loopCounter = 1;
    while (loopCounter < (days +1))
    {

        dayPay *= 2;
        cout << setw(4) << loopCounter << setw(20) << "$"<< (dayPay * 0.01) << endl;
        totalPay = totalPay + dayPay;
        loopCounter++;

    }
cout << "The total earnings for this month are $" << totalPay*0.01 << endl;




        return 0;
}
