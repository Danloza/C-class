// Your Name: Daniel Loza
// Date:1/31/17
// Class C++, engr 1540
// Assignment Name Assignment 3
//Problem 5
// =========================================

#include <iostream>

using namespace std;

int main()
{
   cout << "Gas mileage calculator:" << endl;
    double gasTankG = 16, range = 312, milesPerGallon; //create variables
    milesPerGallon = range / gasTankG;  //do calculations
    cout << "The car can travel " <<  milesPerGallon << " miles on one gallon of gas." << endl; //display output

        return 0;
}
