// Your Name: Daniel Loza
// Date:3/7/17
// Class C++, engr 1540
// Assignment Name Assignment 9
//Problem Random numbers
// =========================================

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
   cout << "This is a random number generator." << endl;
    int numberMin, numberMax, numberRand, numberOne, numberTwo, numberThree, numberFour, numberFive; //create variables


    cout << "What is the minimum number?" << endl; //get info
    cin >> numberMin;
    cout << "What is the maxumum value?" << endl;
    cin >> numberMax;


    //validates input
    while (numberMin < 0 || numberMin > numberMax || numberMax < 0)
    {
    cout << "You entered invalid values. Make sure to enter positive integers and that the minimum is smaller than the maximum." << endl;
    cout << "What is the minimum number?" << endl; //get info
    cin >> numberMin;
    cout << "What is the maxumum value?" << endl;
    cin >> numberMax;
    }

    //generate 5 random numbers
    int counter = 0;
    while (counter < 5)
    {
        numberRand = (rand( ) % (numberMax - numberMin + 1)) + numberMin;
        cout << numberRand << endl;
        counter++;
    }


        return 0;
}
