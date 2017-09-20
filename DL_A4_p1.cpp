// Your Name: Daniel Loza
// Date:2/7/17
// Class C++, engr 1540
// Assignment Name Assignment 4
//Problem challenge 1.
// =========================================

#include <iostream>

using namespace std;

int main()
{
   cout << "This will calculate the miles per gallon a car gets." << endl;
    double tankSize, tankRange, mpg; //create variables


    cout << "How many gallons does the tank hold? " << endl; //get info
    cin >> tankSize;
    cout << "How many miles can you drive on a full tank?" << endl;
    cin >> tankRange;
    mpg = tankRange / tankSize;
    cout << "The car gets " <<  mpg << " Miles to the gallon." << endl;//display output.


        return 0;
}
