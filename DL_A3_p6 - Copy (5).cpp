// Your Name: Daniel Loza
// Date:1/31/17
// Class C++, engr 1540
// Assignment Name Assignment 3
//Problem 6
// =========================================

#include <iostream>

using namespace std;

int main()
{
   cout << "Car travel range" << endl;
    double gasTankG = 20, cityMPG = 23.5, highwayMPG = 28.9, cityRangeMi, highwayRangeMi; //create variables
    cityRangeMi = gasTankG * cityMPG; //calculate range in city.
    highwayRangeMi = gasTankG * highwayMPG; // calculate range in highway.
    cout << "The car can travel " <<  cityRangeMi << " miles in town on one tank of gas." << endl; //display range in city.
    cout << "The car can travel " <<  highwayRangeMi << " miles on the highway on one tank of gas." << endl;  // display range in highway.
        return 0;
}
