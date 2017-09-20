// Your Name: Daniel Loza
// Date:2/7/17
// Class C++, engr 1540
// Assignment Name Assignment 6
//Problem Random numbers
// =========================================

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
   cout << "This is a random number generator." << endl;
    int numberMin, numberMax, numberOne, numberTwo, numberThree, numberFour, numberFive; //create variables


    cout << "What is the minimum number?" << endl; //get info
    cin >> numberMin;
    cout << "What is the maxumum value?" << endl;
    cin >> numberMax;

    //generate random numbers

    numberOne = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
    numberTwo  = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
    numberThree  = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
    numberFour  = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
    numberFive  = (rand( ) % (numberMax - numberMin + 1)) + numberMin;

    cout << numberOne << "   " << numberTwo << "   " << numberThree <<  "   " << numberFour << "   " << numberFive << endl;//display output.


        return 0;
}
