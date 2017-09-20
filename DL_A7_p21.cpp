// Your Name: Daniel Loza
// Date: 2/21/17
// Class C++, engr 1540
// Assignment Name Assignment 7
//Problem 21
// =========================================

#include <iostream>

using namespace std;

int main()
{
    //create variables
    double tempF;

    cout << "Please enter a temperature in Fahrenheit:" << endl;
    cin >> tempF;

  // display the output
    cout << "The substances that will freeze are: " <<  endl;
    // determine what freezes.
    if (tempF <= -173)
    {
        cout << "Ethyl alcohol" << endl;
    }
    if (tempF <= -38)
    {
        cout << "Mercury" << endl;
    }
    if (tempF <= -362)
    {
        cout << "Oxygen" << endl;
    }
    if (tempF <= 32)
    {
        cout << "Water" << endl;
    }

    cout << "The substances that will boil are: " << endl;
        if (tempF >= 172)
        {
            cout << "Ethy alcohol" << endl;
        }
        if (tempF >= 676)
        {
            cout << "Mercury" << endl;
        }
        if (tempF >= -306)
        {
            cout << "Oxygen" << endl;
        }
        if (tempF >= 212)
        {
            cout << "Water" << endl;
        }

        return 0;
}
