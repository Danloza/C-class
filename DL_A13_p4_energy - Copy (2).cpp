// Your Name: Daniel Loza
// Date:3/28/17
// Class C++, engr 1540
// Assignment Name Assignment 13
//Problem 4 Kinetic Energy
// =========================================

#include <iostream>
#include <cmath>

//create function
double kineticEnergy (double mass, double velocity)
{
    //  calculate energy using e=mv^2/2
    double energy;
    energy = (mass * velocity * velocity )/2;
    return energy;
}


using namespace std;
// main program
int main()
{
   //introduction
   cout << "This program will calculate the kinetic energy of an object." << endl;

   //create variables
   double mass, velocity, energy;

   //prompt user for mass
    cout << "Please enter the mass in Kilograms:"<< endl;
    cin >> mass;
        //validates input
    while (mass< 0)
    {
    cout << "You entered an invalid value. Make sure to enter a positive value. The units are kilograms." << endl;

    cin >> mass;
    }

       //prompt user for velocity
    cout << "Please enter the velocity in meters per second:" << endl;
    cin >> velocity;
        //validates input
    while (velocity< 0)
    {
    cout << "You entered an invalid value. Make sure to enter a positive value. The units are meters per second." << endl;

    cin >> velocity;
    }

    //call function and set its value to  energy variable.
    energy = kineticEnergy(mass, velocity);

    cout << "The object has a kinetic energy of " <<  energy << " Joules." << endl;  // display  final output
        return 0;
}
