// Your Name: Daniel Loza
// Date:3/7/17
// Class C++, engr 1540
// Assignment Name Assignment 9
//Problem Distance traveled
// =========================================

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{

  //input speed and hours.
  int hours =0, speed =0, milesHour =0, milesTravelled =0, loopCounter =0;

   cout << "This program will calculate the distance traveled." << endl;
   cout << "What is the speed of the vehicle in mph?" << endl ;
   cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> hours;

     //validates input as positive and bellow the speed of light.
    while (hours < 0 || speed > 671000000|| speed < 0)
    {
    cout << "You entered invalid values. Make sure to enter positive integers and a speed less than c." << endl;
   cout << "What is the speed of the vehicle in mph?" << endl ;
   cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> hours;
    }

    //output header
    cout << "Hour" << setw(20) << "Miles Traveled" << endl;
    cout << "-------------------------------------" << endl;

    //calculate distance and add it to the running total.
    loopCounter = 1;
    while (loopCounter < (hours +1))
    {

        milesTravelled = milesTravelled + speed;
        cout << loopCounter << setw(20) << milesTravelled << endl;
        loopCounter++;

    }





        return 0;
}
