// Your Name: Daniel Loza
// Date:3/14/17
// Class C++, engr 1540
// Assignment Name Assignment 11
//Problem Decimal to fractions
// =========================================

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //create variables

 double decimal, numerator =0;


     //output header
    cout << "Fraction" << setw(25) << "Decimal" << endl;
    cout << "-------------------------------------" << endl;

//create and display output
    while (numerator <9)
        {
        decimal = numerator /8 ;
        cout << numerator << "/8" << setw(20)<< decimal<< endl;
        numerator++;
        }


        return 0;
}
