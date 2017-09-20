// Your Name: Daniel Loza
// Date:2/7/17
// Class C++, engr 1540
// Assignment Name Assignment 4
//Problem challege 14
// =========================================

#include <iostream>

using namespace std;

int main()
{
   cout << "Celsius to Fahrenheit coverter" << endl;
    double tempC, tempF;

    cout << "What is the temperature in Celsius?" << endl;
    cin >> tempC;
    tempF = ((tempC * 9 /5) + 32);
    cout << "This temperature is equal to " << tempF << " degrees Fahrenheit." << endl;

        return 0;
}
