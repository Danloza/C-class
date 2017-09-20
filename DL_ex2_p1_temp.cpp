// Your Name: Daniel Loza
// Date:3/21/17
// Class C++, engr 1540
// Assignment Name: Exam2
//Problem one, Conversion table for C to F.
// =========================================

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //creates variables
 double tempC, tempF;



 //input the starting temperature
 cout << "Please enter the starting temperature in C:" << endl;
 cin >> tempC;

 //loop to validate input -100 and 1000c.
     while (tempC < -100 || tempC >1000)
    {
    cout << "You entered an invalid value. Temperature should be between -100 C and 1000 C. \n please enter a valid temperature:" << endl ;
    cin >> tempC;
    }

 // making the temp have decimal places
 tempC*= 1.00;
 //output header


    cout << "Temp C" << setw(20) << "Temp F" << endl;
    cout << "-------------------------------------" << endl;
 //loop to display graph. runs 5 times.
 for ( int counter=0; counter <5; counter++)
 {
      //convert to f
   tempF = ((tempC * 9.00 /5) + 32);

      //output with 2 decimal places

      std::cout <<  fixed << setprecision(2)<<tempC  << setw(20) << tempF << endl;
      //add 5 c
      tempC+= 5;
 }
//have to adjust prescision.



        return 0;
}
